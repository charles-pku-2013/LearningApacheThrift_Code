#!/usr/bin/env php
<?php

error_reporting(E_ERROR);

define('THRIFT_PHP_LIB', __DIR__.'/thrift-0.9.2/lib/php/lib');
define('GEN_PHP_DIR', __DIR__.'/gen-php');

require_once THRIFT_PHP_LIB.'/Thrift/ClassLoader/ThriftClassLoader.php';

use Thrift\ClassLoader\ThriftClassLoader;

$loader = new ThriftClassLoader();
$loader->registerNamespace('Thrift', THRIFT_PHP_LIB);
$loader->registerDefinition('myfirst', GEN_PHP_DIR);
$loader->register();


use Thrift\Protocol\TBinaryProtocol;
use Thrift\Transport\TPhpStream;
use Thrift\Transport\TBufferedTransport;

class MyFirstHandler implements \myfirst\MyFirstServiceIf {

    public function log($filename) {
        date_default_timezone_set('UTC');
        $time = date('Y-m-d H:m:s');
        file_put_contents(__DIR__."/".$filename, $time."\n", FILE_APPEND);
        error_log("Written " . $time . " to " . $filename);
    }

    public function multiply($number1, $number2) {
        error_log("multiply " . $number1 . " by " . $number2);
        return $number1 * $number2;
    }


    public function get_log_size($filename) {
        $filesize = filesize(__DIR__."/".$filename);
        if ($filesize === false)
            {
                $e = new \myfirst\MyError();
                $e->error_code = 1;
                $e->error_description = "Can't get size information for file " . $filename;
                error_log($e->error_description);
                throw $e;
            }
        error_log("size of log file " . $filename . " is " . $filesize . "B");
        return $filesize;
    } 

};

header('Content-Type', 'application/x-thrift');
echo "\r\n";


$handler = new MyFirstHandler();
$processor = new \myfirst\MyFirstServiceProcessor($handler);

$transport = new TBufferedTransport(new TPhpStream(TPhpStream::MODE_R | TPhpStream::MODE_W));
$protocol = new TBinaryProtocol($transport, true, true);

$transport->open();
$processor->process($protocol, $protocol);
$transport->close();
