#include "Person.h"
// 友元函数
istream &operator >> ( istream &in , Person &per ){
    in >> per.Name >> per.Address ;
    return in ;
}

ostream &operator << ( ostream &out , Person &per ){
    out << per.Name << " " << per.Address;
    return out ;
}
// 功能性函数
string Person::findName() const {                       // 这两个函数应该被定义为常量成员函数，因为无论是返回姓名还是地址，在函数体
    return Name ;                                       // 内部都是读取数据成员的值，而不必做任何改变
}

string Person::findAddress() const {
    return Address ;
}
