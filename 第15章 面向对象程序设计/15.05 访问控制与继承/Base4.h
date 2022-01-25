#ifndef BASE4_H
#define BASE4_H

#include <iostream>
using namespace std;

class Base4{
    public:
        size_t size() const ;

    protected:
        size_t n ;
};

class Derived : private Base4 {      // private�̳�
    public:
        using Base4::size ;          // ���ֶ���ߴ���صĳ�Ա�ķ��ʼ���

    protected:
        using Base4::n ;
};

#endif // BASE4_H
