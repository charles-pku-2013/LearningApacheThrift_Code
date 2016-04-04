# this is just a Test service, which contains two methods
# thrift --gen cpp --gen php --gen py test.thrift

service Test {

    # this method probably does nothing
    void donothing(),

    # this method probably multiplies two numbers
    i32 multiply(1:i32 number1, 2:i32 number2),

}
