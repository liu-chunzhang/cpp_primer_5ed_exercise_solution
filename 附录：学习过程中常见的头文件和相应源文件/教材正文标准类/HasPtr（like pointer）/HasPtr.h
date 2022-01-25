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
        size_t *use ;       // 新增的use变量用来记录多少对象共享*ps的成员
};

#endif // HASPTR_H
