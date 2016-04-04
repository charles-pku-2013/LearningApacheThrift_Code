<?php
namespace myfirst;

/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
use Thrift\Base\TBase;
use Thrift\Type\TType;
use Thrift\Type\TMessageType;
use Thrift\Exception\TException;
use Thrift\Exception\TProtocolException;
use Thrift\Protocol\TProtocol;
use Thrift\Protocol\TBinaryProtocolAccelerated;
use Thrift\Exception\TApplicationException;


final class MyEnum {
  const ENUM1 = 0;
  const ENUM2 = 1;
  const ENUM3 = 2;
  static public $__names = array(
    0 => 'ENUM1',
    1 => 'ENUM2',
    2 => 'ENUM3',
  );
}

class MyStruct {
  static $_TSPEC;

  /**
   * @var bool
   */
  public $mybool = null;
  /**
   * @var int
   */
  public $mybyte = null;
  /**
   * @var int
   */
  public $myi16 = null;
  /**
   * @var int
   */
  public $myi32 = null;
  /**
   * @var int
   */
  public $myi64 = null;
  /**
   * @var double
   */
  public $mydouble = null;
  /**
   * @var string
   */
  public $mystring = null;
  /**
   * @var int[]
   */
  public $mylist = null;
  /**
   * @var int[]
   */
  public $myset = null;
  /**
   * @var array
   */
  public $mymap = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'mybool',
          'type' => TType::BOOL,
          ),
        2 => array(
          'var' => 'mybyte',
          'type' => TType::BYTE,
          ),
        3 => array(
          'var' => 'myi16',
          'type' => TType::I16,
          ),
        4 => array(
          'var' => 'myi32',
          'type' => TType::I32,
          ),
        5 => array(
          'var' => 'myi64',
          'type' => TType::I64,
          ),
        6 => array(
          'var' => 'mydouble',
          'type' => TType::DOUBLE,
          ),
        7 => array(
          'var' => 'mystring',
          'type' => TType::STRING,
          ),
        8 => array(
          'var' => 'mylist',
          'type' => TType::LST,
          'etype' => TType::I32,
          'elem' => array(
            'type' => TType::I32,
            ),
          ),
        9 => array(
          'var' => 'myset',
          'type' => TType::SET,
          'etype' => TType::I32,
          'elem' => array(
            'type' => TType::I32,
            ),
          ),
        10 => array(
          'var' => 'mymap',
          'type' => TType::MAP,
          'ktype' => TType::I32,
          'vtype' => TType::I32,
          'key' => array(
            'type' => TType::I32,
          ),
          'val' => array(
            'type' => TType::I32,
            ),
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['mybool'])) {
        $this->mybool = $vals['mybool'];
      }
      if (isset($vals['mybyte'])) {
        $this->mybyte = $vals['mybyte'];
      }
      if (isset($vals['myi16'])) {
        $this->myi16 = $vals['myi16'];
      }
      if (isset($vals['myi32'])) {
        $this->myi32 = $vals['myi32'];
      }
      if (isset($vals['myi64'])) {
        $this->myi64 = $vals['myi64'];
      }
      if (isset($vals['mydouble'])) {
        $this->mydouble = $vals['mydouble'];
      }
      if (isset($vals['mystring'])) {
        $this->mystring = $vals['mystring'];
      }
      if (isset($vals['mylist'])) {
        $this->mylist = $vals['mylist'];
      }
      if (isset($vals['myset'])) {
        $this->myset = $vals['myset'];
      }
      if (isset($vals['mymap'])) {
        $this->mymap = $vals['mymap'];
      }
    }
  }

  public function getName() {
    return 'MyStruct';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::BOOL) {
            $xfer += $input->readBool($this->mybool);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::BYTE) {
            $xfer += $input->readByte($this->mybyte);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::I16) {
            $xfer += $input->readI16($this->myi16);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 4:
          if ($ftype == TType::I32) {
            $xfer += $input->readI32($this->myi32);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 5:
          if ($ftype == TType::I64) {
            $xfer += $input->readI64($this->myi64);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 6:
          if ($ftype == TType::DOUBLE) {
            $xfer += $input->readDouble($this->mydouble);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 7:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->mystring);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 8:
          if ($ftype == TType::LST) {
            $this->mylist = array();
            $_size0 = 0;
            $_etype3 = 0;
            $xfer += $input->readListBegin($_etype3, $_size0);
            for ($_i4 = 0; $_i4 < $_size0; ++$_i4)
            {
              $elem5 = null;
              $xfer += $input->readI32($elem5);
              $this->mylist []= $elem5;
            }
            $xfer += $input->readListEnd();
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 9:
          if ($ftype == TType::SET) {
            $this->myset = array();
            $_size6 = 0;
            $_etype9 = 0;
            $xfer += $input->readSetBegin($_etype9, $_size6);
            for ($_i10 = 0; $_i10 < $_size6; ++$_i10)
            {
              $elem11 = null;
              $xfer += $input->readI32($elem11);
              if (is_scalar($elem11)) {
                $this->myset[$elem11] = true;
              } else {
                $this->myset []= $elem11;
              }
            }
            $xfer += $input->readSetEnd();
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 10:
          if ($ftype == TType::MAP) {
            $this->mymap = array();
            $_size12 = 0;
            $_ktype13 = 0;
            $_vtype14 = 0;
            $xfer += $input->readMapBegin($_ktype13, $_vtype14, $_size12);
            for ($_i16 = 0; $_i16 < $_size12; ++$_i16)
            {
              $key17 = 0;
              $val18 = 0;
              $xfer += $input->readI32($key17);
              $xfer += $input->readI32($val18);
              $this->mymap[$key17] = $val18;
            }
            $xfer += $input->readMapEnd();
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('MyStruct');
    if ($this->mybool !== null) {
      $xfer += $output->writeFieldBegin('mybool', TType::BOOL, 1);
      $xfer += $output->writeBool($this->mybool);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->mybyte !== null) {
      $xfer += $output->writeFieldBegin('mybyte', TType::BYTE, 2);
      $xfer += $output->writeByte($this->mybyte);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->myi16 !== null) {
      $xfer += $output->writeFieldBegin('myi16', TType::I16, 3);
      $xfer += $output->writeI16($this->myi16);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->myi32 !== null) {
      $xfer += $output->writeFieldBegin('myi32', TType::I32, 4);
      $xfer += $output->writeI32($this->myi32);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->myi64 !== null) {
      $xfer += $output->writeFieldBegin('myi64', TType::I64, 5);
      $xfer += $output->writeI64($this->myi64);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->mydouble !== null) {
      $xfer += $output->writeFieldBegin('mydouble', TType::DOUBLE, 6);
      $xfer += $output->writeDouble($this->mydouble);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->mystring !== null) {
      $xfer += $output->writeFieldBegin('mystring', TType::STRING, 7);
      $xfer += $output->writeString($this->mystring);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->mylist !== null) {
      if (!is_array($this->mylist)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('mylist', TType::LST, 8);
      {
        $output->writeListBegin(TType::I32, count($this->mylist));
        {
          foreach ($this->mylist as $iter19)
          {
            $xfer += $output->writeI32($iter19);
          }
        }
        $output->writeListEnd();
      }
      $xfer += $output->writeFieldEnd();
    }
    if ($this->myset !== null) {
      if (!is_array($this->myset)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('myset', TType::SET, 9);
      {
        $output->writeSetBegin(TType::I32, count($this->myset));
        {
          foreach ($this->myset as $iter20 => $iter21)
          {
            if (is_scalar($iter21)) {
            $xfer += $output->writeI32($iter20);
            } else {
            $xfer += $output->writeI32($iter21);
            }
          }
        }
        $output->writeSetEnd();
      }
      $xfer += $output->writeFieldEnd();
    }
    if ($this->mymap !== null) {
      if (!is_array($this->mymap)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('mymap', TType::MAP, 10);
      {
        $output->writeMapBegin(TType::I32, TType::I32, count($this->mymap));
        {
          foreach ($this->mymap as $kiter22 => $viter23)
          {
            $xfer += $output->writeI32($kiter22);
            $xfer += $output->writeI32($viter23);
          }
        }
        $output->writeMapEnd();
      }
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class MyUnion {
  static $_TSPEC;

  /**
   * @var bool
   */
  public $mybool = null;
  /**
   * @var string
   */
  public $mystring = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'mybool',
          'type' => TType::BOOL,
          ),
        2 => array(
          'var' => 'mystring',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['mybool'])) {
        $this->mybool = $vals['mybool'];
      }
      if (isset($vals['mystring'])) {
        $this->mystring = $vals['mystring'];
      }
    }
  }

  public function getName() {
    return 'MyUnion';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::BOOL) {
            $xfer += $input->readBool($this->mybool);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->mystring);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('MyUnion');
    if ($this->mybool !== null) {
      $xfer += $output->writeFieldBegin('mybool', TType::BOOL, 1);
      $xfer += $output->writeBool($this->mybool);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->mystring !== null) {
      $xfer += $output->writeFieldBegin('mystring', TType::STRING, 2);
      $xfer += $output->writeString($this->mystring);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class MyError extends TException {
  static $_TSPEC;

  /**
   * @var int
   */
  public $error_code = null;
  /**
   * @var string
   */
  public $error_description = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'error_code',
          'type' => TType::I32,
          ),
        2 => array(
          'var' => 'error_description',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['error_code'])) {
        $this->error_code = $vals['error_code'];
      }
      if (isset($vals['error_description'])) {
        $this->error_description = $vals['error_description'];
      }
    }
  }

  public function getName() {
    return 'MyError';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::I32) {
            $xfer += $input->readI32($this->error_code);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->error_description);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('MyError');
    if ($this->error_code !== null) {
      $xfer += $output->writeFieldBegin('error_code', TType::I32, 1);
      $xfer += $output->writeI32($this->error_code);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->error_description !== null) {
      $xfer += $output->writeFieldBegin('error_description', TType::STRING, 2);
      $xfer += $output->writeString($this->error_description);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class DivisionByZeroError extends TException {
  static $_TSPEC;

  /**
   * @var string
   */
  public $description = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'description',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['description'])) {
        $this->description = $vals['description'];
      }
    }
  }

  public function getName() {
    return 'DivisionByZeroError';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->description);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('DivisionByZeroError');
    if ($this->description !== null) {
      $xfer += $output->writeFieldBegin('description', TType::STRING, 1);
      $xfer += $output->writeString($this->description);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class WrongTypeError extends TException {
  static $_TSPEC;

  /**
   * @var string
   */
  public $description = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'description',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['description'])) {
        $this->description = $vals['description'];
      }
    }
  }

  public function getName() {
    return 'WrongTypeError';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->description);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('WrongTypeError');
    if ($this->description !== null) {
      $xfer += $output->writeFieldBegin('description', TType::STRING, 1);
      $xfer += $output->writeString($this->description);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

final class Constant extends \Thrift\Type\TConstant {
  static protected $PI;

  static protected function init_PI() {
    return 3.14159;
  }
}


