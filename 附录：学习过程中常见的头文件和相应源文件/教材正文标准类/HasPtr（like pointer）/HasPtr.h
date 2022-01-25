#ifndef HASPTR_H
#define HASPTR_H

#include <iostream>
using namespace std;

class HasPtr{
    public:
        HasPtr( const string &s = string() ) ;
        HasPtr( const string &s , int j ) ;
        HasPtr( const HasPtr &p ) ;
        HasPtr &operator = ( const HasPtr &p ) ;
        ~HasPtr();

    private:
        string *ps ;
        int i ;
        size_t *use ;       // ������use����������¼���ٶ�����*ps�ĳ�Ա
};

#endif // HASPTR_H
