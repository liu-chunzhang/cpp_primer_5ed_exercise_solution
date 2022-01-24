#ifndef OBJ_H
#define OBJ_H

#include <iostream>
#include <deque>
#include <stack>
#include <stdexcept>
using namespace std;

enum obj_type { LP , RP , ADD , SUB , VAL };                              // enum是枚举类型，内容在教材19.3节会讲到

struct obj{
    obj( obj_type type , double val = 0 ) { t = type ; v = val ; }        // 这是默认构造函数

    obj_type t ;
    double v ;
};

#endif // OBJ_H
