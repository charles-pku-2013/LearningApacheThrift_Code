#!/usr/bin/env php
<?php

define('THRIFT_PHP_LIB', __DIR__.'/thrift-0.9.2/lib/php/lib');
define('GEN_PHP_DIR', __DIR__.'/gen-php');

require_once THRIFT_PHP_LIB.'/Thrift/ClassLoader/ThriftClassLoader.php';

use Thrift\ClassLoader\ThriftClassLoader;

$loader = new ThriftClassLoader();
$loader->registerNamespace('Thrift', THRIFT_PHP_LIB);
// register your namespace
$loader->registerDefinition('myfirst', GEN_PHP_DIR);
$loader->register();

// include here the protocols and transports that you need
use Thrift\Protocol\TBinaryProtocol;
use Thrift\Transport\TSocket;
use Thrift\Transport\THttpClient;
use Thrift\Transport\TBufferedTransport;
use Thrift\Exception\TException;

$server = new TSocket('localhost', 8080);

// create connection
$transport = new TBufferedTransport($server, 1024, 1024); 
$protocol = new TBinaryProtocol($transport);
$client = new \myfirst\MyFirstServiceClient($protocol);

$transport->open();

print $client->divide(84,0);

$transport->close();
