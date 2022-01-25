#ifndef FOO_H
#define FOO_H

#include <iostream>
using namespace std;

template <typename T>
class Foo {
    public:
        static size_t count() ;

    private:
        static size_t ctr ;
        T tvalue ;
};

template <typename T>
size_t Foo<T>::ctr = 0 ;

template <typename T>
size_t Foo<T>::count() {
    return ctr ;
}

#endif // FOO_H
