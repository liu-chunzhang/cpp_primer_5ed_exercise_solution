#include "X.h"

X::X() {
    cout << "构造函数X()" << endl;
}

X::X( const X &x ) {
    cout << "拷贝构造函数X( const X &x )" << endl;
}

X &X::operator = ( const X &rhs ) {
    cout << "拷贝赋值运算符= ( const X &rhs ) " << endl;
    return *this ;
}

X::~X() {
    cout << "析构函数~X()" << endl;
}
