#ifndef OBJ_H
#define OBJ_H

#include <iostream>
#include <deque>
#include <stack>
#include <stdexcept>
using namespace std;

enum obj_type { LP , RP , ADD , SUB , VAL };                              // enum��ö�����ͣ������ڽ̲�19.3�ڻὲ��

struct obj{
    obj( obj_type type , double val = 0 ) { t = type ; v = val ; }        // ����Ĭ�Ϲ��캯��

    obj_type t ;
    double v ;
};

#endif // OBJ_H
