include "mybase.thrift"

namespace * mytoolbox

typedef i16 distance

const i16 EARTH_RADIUS = 6371

enum PointType {
    CITY,
    VILLAGE,
    LAKE,
    MOUNTAIN,
    LANDMARK
}

struct Point {
    1:double latitude,
    2:double longitude,
    3:string name,
    4:PointType type
}

exception CoordsOutOfRange {
    1: string description
}

exception NoValidRegex {
    1: string description
}

exception InvalidInputString {
    1: string description
}

service MyToolbox extends mybase.MyBaseService {
    
    distance get_distance(1:Point point1, 2:Point point2) throws (1:CoordsOutOfRange err1, 2:mybase.WrongDataType err2),

    list<string> find_occurences(1:string string_to_match, 2:string regex) throws (1:NoValidRegex err1, 2:InvalidInputString err2)   
}


