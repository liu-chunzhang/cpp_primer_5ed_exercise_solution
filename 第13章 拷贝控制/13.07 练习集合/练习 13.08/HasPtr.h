#ifndef HASPTR_H
#define HASPTR_H

#include <iostream>
using namespace std;

class HasPtr{
    friend bool operator == ( const HasPtr &lhs , const HasPtr &rhs ) ;
    friend bool operator != ( const HasPtr &lhs , const HasPtr &rhs ) ;

    public:
        HasPtr( const string &s = string() ) ;
        HasPtr( const string &s , int j ) ;
        HasPtr( const HasPtr &h ) ;
        HasPtr &operator = ( const HasPtr &rhs ) ;
        ~HasPtr() = default ;

    public:
        string *return_sptr() const ;
        HasPtr &operator = ( const string& ) ;
        string &operator * () const ;

    private:
        string *ps ;
        int i ;
};

#endif // HASPTR_H
