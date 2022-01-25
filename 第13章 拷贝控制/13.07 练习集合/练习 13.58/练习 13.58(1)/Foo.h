#ifndef FOO_H
#define FOO_H

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Foo{
    public:
        Foo() = default ;
        Foo( const Foo &foo ) ;
        Foo &operator = ( const Foo &foo ) & ;
        ~Foo() = default ;

    public:
        Foo anotherMem() const & ;
        Foo sorted() && ;
        Foo sorted() const & ;

    private:
        vector<int> data ;
};

#endif // FOO_H
