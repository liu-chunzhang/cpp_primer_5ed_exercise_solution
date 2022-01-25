#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base {
    friend bool operator == ( const Base &lhs , const Base &rhs ) ;

    public:
        Base() = default ;
        Base( int i ) ;
        virtual ~Base() = default ;

    protected:
        virtual bool equal( const Base &rhs ) const ;

    protected:
        int bval = 0 ;
};

class Derived : public Base {
    public:
        Derived() = default ;
        Derived( int i , int j ) ;
        virtual ~Derived() = default ;

    protected:
        bool equal( const Base &rhs ) const ;

    private:
        int dval = 0 ;
};

#endif // BASE_H
