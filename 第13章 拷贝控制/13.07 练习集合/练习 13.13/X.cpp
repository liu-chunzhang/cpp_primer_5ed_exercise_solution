#include "X.h"

X::X() {
    cout << "���캯��X()" << endl;
}

X::X( const X &x ) {
    cout << "�������캯��X( const X &x )" << endl;
}

X &X::operator = ( const X &rhs ) {
    cout << "������ֵ�����= ( const X &rhs ) " << endl;
    return *this ;
}

X::~X() {
    cout << "��������~X()" << endl;
}
