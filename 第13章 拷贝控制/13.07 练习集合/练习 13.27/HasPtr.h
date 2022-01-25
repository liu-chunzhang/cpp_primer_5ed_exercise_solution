#ifndef HASPTR_H
#define HASPTR_H

#include <iostream>
using namespace std;

class HasPtr{
    public:
        HasPtr( const string &s , int j ) ;
        HasPtr( const string &s = string() ) ;                                  // ����ί�й��캯��
        HasPtr &operator = ( const string &s ) ;
        HasPtr( const HasPtr &p ) ;
        HasPtr &operator = ( const HasPtr &rhs ) ;
        ~HasPtr();

    public:
        string &operator * () const ;

    private:
        string *ps ;
        int i ;
        size_t *use ;                                                                  // ������use����������¼���ٶ�����*ps�ĳ�Ա
};

#endif // HASPTR_H
