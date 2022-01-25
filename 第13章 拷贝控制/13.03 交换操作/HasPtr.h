#ifndef HASPTR_H
#define HASPTR_H

#include <iostream>
using namespace std;

class HasPtr{
    friend void swap( HasPtr &lhs , HasPtr &rhs ) ;

    public:
        HasPtr( const string &s = string() ) ;
        HasPtr( const string &s , int j ) ;
        HasPtr &operator = ( const string &s ) ;
        HasPtr( const HasPtr &p ) ;
        HasPtr &operator = ( const HasPtr &p ) ;
        HasPtr &operator = ( HasPtr h ) ;
        ~HasPtr();

    public:
        const string &operator * () const ;

    private:
        string *ps ;
        int i ;
        size_t *use ;       // 新增的use变量用来记录多少对象共享*ps的成员
};

#endif // HASPTR_H
