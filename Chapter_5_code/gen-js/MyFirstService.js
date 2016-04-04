//
// Autogenerated by Thrift Compiler (0.9.2)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


//HELPER FUNCTIONS AND STRUCTURES

myfirst.MyFirstService_log_args = function(args) {
  this.filename = null;
  if (args) {
    if (args.filename !== undefined) {
      this.filename = args.filename;
    }
  }
};
myfirst.MyFirstService_log_args.prototype = {};
myfirst.MyFirstService_log_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.filename = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

myfirst.MyFirstService_log_args.prototype.write = function(output) {
  output.writeStructBegin('MyFirstService_log_args');
  if (this.filename !== null && this.filename !== undefined) {
    output.writeFieldBegin('filename', Thrift.Type.STRING, 1);
    output.writeString(this.filename);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

myfirst.MyFirstService_log_result = function(args) {
};
myfirst.MyFirstService_log_result.prototype = {};
myfirst.MyFirstService_log_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

myfirst.MyFirstService_log_result.prototype.write = function(output) {
  output.writeStructBegin('MyFirstService_log_result');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

myfirst.MyFirstService_multiply_args = function(args) {
  this.number1 = null;
  this.number2 = null;
  if (args) {
    if (args.number1 !== undefined) {
      this.number1 = args.number1;
    }
    if (args.number2 !== undefined) {
      this.number2 = args.number2;
    }
  }
};
myfirst.MyFirstService_multiply_args.prototype = {};
myfirst.MyFirstService_multiply_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.number1 = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.number2 = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

myfirst.MyFirstService_multiply_args.prototype.write = function(output) {
  output.writeStructBegin('MyFirstService_multiply_args');
  if (this.number1 !== null && this.number1 !== undefined) {
    output.writeFieldBegin('number1', Thrift.Type.I32, 1);
    output.writeI32(this.number1);
    output.writeFieldEnd();
  }
  if (this.number2 !== null && this.number2 !== undefined) {
    output.writeFieldBegin('number2', Thrift.Type.I32, 2);
    output.writeI32(this.number2);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

myfirst.MyFirstService_multiply_result = function(args) {
  this.success = null;
  if (args) {
    if (args.success !== undefined) {
      this.success = args.success;
    }
  }
};
myfirst.MyFirstService_multiply_result.prototype = {};
myfirst.MyFirstService_multiply_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.I32) {
        this.success = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

myfirst.MyFirstService_multiply_result.prototype.write = function(output) {
  output.writeStructBegin('MyFirstService_multiply_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.I32, 0);
    output.writeI32(this.success);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

myfirst.MyFirstService_get_log_size_args = function(args) {
  this.filename = null;
  if (args) {
    if (args.filename !== undefined) {
      this.filename = args.filename;
    }
  }
};
myfirst.MyFirstService_get_log_size_args.prototype = {};
myfirst.MyFirstService_get_log_size_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.filename = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

myfirst.MyFirstService_get_log_size_args.prototype.write = function(output) {
  output.writeStructBegin('MyFirstService_get_log_size_args');
  if (this.filename !== null && this.filename !== undefined) {
    output.writeFieldBegin('filename', Thrift.Type.STRING, 1);
    output.writeString(this.filename);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

myfirst.MyFirstService_get_log_size_result = function(args) {
  this.success = null;
  this.error = null;
  if (args instanceof myfirst.MyError) {
    this.error = args;
    return;
  }
  if (args) {
    if (args.success !== undefined) {
      this.success = args.success;
    }
    if (args.error !== undefined) {
      this.error = args.error;
    }
  }
};
myfirst.MyFirstService_get_log_size_result.prototype = {};
myfirst.MyFirstService_get_log_size_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.I32) {
        this.success = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.error = new myfirst.MyError();
        this.error.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

myfirst.MyFirstService_get_log_size_result.prototype.write = function(output) {
  output.writeStructBegin('MyFirstService_get_log_size_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.I32, 0);
    output.writeI32(this.success);
    output.writeFieldEnd();
  }
  if (this.error !== null && this.error !== undefined) {
    output.writeFieldBegin('error', Thrift.Type.STRUCT, 1);
    this.error.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

myfirst.MyFirstServiceClient = function(input, output) {
    this.input = input;
    this.output = (!output) ? input : output;
    this.seqid = 0;
};
myfirst.MyFirstServiceClient.prototype = {};
myfirst.MyFirstServiceClient.prototype.log = function(filename, callback) {
  if (callback === undefined) {
    this.send_log(filename);
  } else {
    var postData = this.send_log(filename, true);
    return this.output.getTransport()
      .jqRequest(this, postData, arguments, this.recv_log);
  }
};

myfirst.MyFirstServiceClient.prototype.send_log = function(filename, callback) {
  this.output.writeMessageBegin('log', Thrift.MessageType.ONEWAY, this.seqid);
  var args = new myfirst.MyFirstService_log_args();
  args.filename = filename;
  args.write(this.output);
  this.output.writeMessageEnd();
  return this.output.getTransport().flush(callback);
};
myfirst.MyFirstServiceClient.prototype.multiply = function(number1, number2, callback) {
  if (callback === undefined) {
    this.send_multiply(number1, number2);
    return this.recv_multiply();
  } else {
    var postData = this.send_multiply(number1, number2, true);
    return this.output.getTransport()
      .jqRequest(this, postData, arguments, this.recv_multiply);
  }
};

myfirst.MyFirstServiceClient.prototype.send_multiply = function(number1, number2, callback) {
  this.output.writeMessageBegin('multiply', Thrift.MessageType.CALL, this.seqid);
  var args = new myfirst.MyFirstService_multiply_args();
  args.number1 = number1;
  args.number2 = number2;
  args.write(this.output);
  this.output.writeMessageEnd();
  return this.output.getTransport().flush(callback);
};

myfirst.MyFirstServiceClient.prototype.recv_multiply = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new myfirst.MyFirstService_multiply_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.success) {
    return result.success;
  }
  throw 'multiply failed: unknown result';
};
myfirst.MyFirstServiceClient.prototype.get_log_size = function(filename, callback) {
  if (callback === undefined) {
    this.send_get_log_size(filename);
    return this.recv_get_log_size();
  } else {
    var postData = this.send_get_log_size(filename, true);
    return this.output.getTransport()
      .jqRequest(this, postData, arguments, this.recv_get_log_size);
  }
};

myfirst.MyFirstServiceClient.prototype.send_get_log_size = function(filename, callback) {
  this.output.writeMessageBegin('get_log_size', Thrift.MessageType.CALL, this.seqid);
  var args = new myfirst.MyFirstService_get_log_size_args();
  args.filename = filename;
  args.write(this.output);
  this.output.writeMessageEnd();
  return this.output.getTransport().flush(callback);
};

myfirst.MyFirstServiceClient.prototype.recv_get_log_size = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new myfirst.MyFirstService_get_log_size_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.error) {
    throw result.error;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'get_log_size failed: unknown result';
};
