# directory with code generated by Apache Thrift
$:.push('gen-rb')
# directory with the Apache Thrift library
$:.unshift 'thrift-0.9.2/lib/rb/lib'

require 'thrift'

require 'my_toolbox'

require 'digest/md5'

transport = Thrift::BufferedTransport.new(Thrift::Socket.new('localhost', 8080))
protocol = Thrift::BinaryProtocol.new(transport)
client = Mytoolbox::MyToolbox::Client.new(protocol)

transport.open()


print client.find_occurences(Digest::MD5.hexdigest("hello world"), '[a-z]')

transport.close()