#ifndef HASPTR_H
#define HASPTR_H

#include <iostream>
using namespace std;

class HasPtr{
    friend bool operator == ( const HasPtr &lhs , const HasPtr &rhs ) ;
    friend bool operator != ( const HasPtr &lhs , const HasPtr &rhs ) ;
    friend void swap( HasPtr &lhs , HasPtr &rhs ) ;

    public:
        HasPtr( const string &s = string() ) ;
        HasPtr( const string &s , int j ) ;
        HasPtr( const HasPtr &h ) ;
        HasPtr( HasPtr &&h ) ;
        HasPtr &operator = ( HasPtr h ) ;
        ~HasPtr() ;

    public:
        string *return_sptr() const ;
        HasPtr &operator = ( const string &s ) ;
        string &operator * () const ;

    private:
        string *ps ;
        int i ;
};

#endif // HASPTR_H
