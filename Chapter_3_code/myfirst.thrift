// namespaces are used in resulting packages
namespace php myfirst
namespace py myfirst

// you can define names for your types. Usable primarily for integers.
typedef i32 int

// simple exception
exception MyError {
    1: int error_code,
    2: string error_description
}

// here starts the service definition
service MyFirstService {

    // log method - it saves timestamp to given file
    oneway void log(1:string filename),

    // multiply method - returns result of multiplication of two integers; it returns integer as well
    int multiply(1:int number1, 2:int number2),

    // get_log_size method -  returns size of log file; throws exception when problems occur
    int get_log_size(1:string filename) throws (1:MyError error),

}
