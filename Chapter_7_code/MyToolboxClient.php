#!/usr/bin/env php
<?php

define('THRIFT_PHP_LIB', __DIR__.'/thrift-0.9.2/lib/php/lib');
define('GEN_PHP_DIR', __DIR__.'/gen-php');

require_once THRIFT_PHP_LIB.'/Thrift/ClassLoader/ThriftClassLoader.php';

use Thrift\ClassLoader\ThriftClassLoader;

$loader = new ThriftClassLoader();
$loader->registerNamespace('Thrift', THRIFT_PHP_LIB);
// register your namespace
$loader->registerDefinition('mytoolbox', GEN_PHP_DIR);
$loader->registerDefinition('mybase', GEN_PHP_DIR);
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
$client = new \mytoolbox\MyToolboxClient($protocol);

$transport->open();

// test the get_distance method
$p1 = new \mytoolbox\Point;
$p2 = new \mytoolbox\Point;

$p1->name = "London";
$p1->type = \mytoolbox\PointType::CITY;
$p1->longitude = 51.507222;
$p1->latitude = -0.1275;

$p2->name = "Kilimanjaro";
$p2->type = \mytoolbox\PointType::MOUNTAIN;
$p2->longitude = -3.075833;
$p2->latitude = 37.353333;

try {

    print "Distance p1-p2: " . $client->get_distance($p1, $p2) . " km\n"; 

    // if one of the values is out of scope
    $p1->longitude = 200;

    print "Distance p1-p2: " . $client->get_distance($p1, $p2) . " km\n"; 

} catch (\mytoolbox\CoordsOutOfRange $e) {
    print "CoordsOutOfRange: " . $e->description . "\n";
} catch (\mybase\WrongDataType $e) {
    print "WrongDataType: " . $e->description . "\n";
}
       
// test the find_occurences method

try {
    print "Looking for letters in random md5 string:\n";
    var_dump($client->find_occurences(md5(rand()), '[a-z]'));

    // this will fail
    print "Testing wrong regex\n";
    var_dump($client->find_occurences(md5(rand()), '[a-z'));    

} catch (\mytoolbox\InvalidInputString $e) {
    print "InvalidInputString: " . $e->description . "\n";
} catch (\mytoolbox\NoValidRegex $e) {
    print "NoValidRegex: " . $e->description . "\n";
}

// test the save_to_log method

try {
    date_default_timezone_set("UTC");
    $client->save_to_log("my test message " . date("Y-m-d H:i:s"), "logfile.log");
    $client->save_to_log("shrt", "logfile.log");
} catch (\mybase\MessageTooShort $e) {
    print "MessageTooShort: " . $e->description . "\n";
} catch (\mybase\InvalidFileName $e) {
    print "InvalidFileName: " . $e->description . "\n";
} catch (\mybase\CantWriteToFile $e) {
    print "CantWriteToFile: " . $e->description . "\n";
}

$transport->close();
