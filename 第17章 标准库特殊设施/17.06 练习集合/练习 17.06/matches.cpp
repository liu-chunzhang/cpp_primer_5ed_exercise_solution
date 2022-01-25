#include "matches.h"

// 功能性函数
matches::size_type matches::get_number() const {
    return cnt ;
}

matches::const_iterator matches::get_first_iter() const {
    return first ;
}

matches::const_iterator matches::get_second_iter() const {
    return second ;
}
