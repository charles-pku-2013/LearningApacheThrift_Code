namespace * mybase

exception MessageTooShort {
    1: string description
}

exception InvalidFileName {
    1: string description
}

exception CantWriteToFile  {
    1: string description
}

exception WrongDataType {
    1: string description
}

service MyBaseService {
    
    void save_to_log(1:string message, 2:string filename) throws (1:MessageTooShort err1, 2:InvalidFileName err2, 3:CantWriteToFile err3)
}