#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

struct Base{
    public:
        Base();

    protected:
        int mem ;
};

struct Derived : public Base{              // �����P546��Ĭ�ϵļ̳б�������һ��֪struct������������ǹ��м̳У���Ϊ�˱��������淶����
    public:
        Derived( int i ) ;
        int get_mem() ;                     // ������Derived::mem
        int get_base_mem() ;

    protected:
        int mem ;                           // �����˻����е�mem
};

#endif // BASE_H
