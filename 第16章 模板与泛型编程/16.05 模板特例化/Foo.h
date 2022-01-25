#ifndef FOO_H
#define FOO_H

#include <iostream>
using namespace std;

template <typename T>
struct Foo {
    public:
        Foo( const T &t = T() ) : mem( t ) { }
        void Bar() ;
    private:
        T mem ;
};

template <typename T>
void Foo<T>::Bar() {
    cout << "Using function void Foo<T>::Bar()" << endl;
}

template <>
void Foo<int>::Bar() {
    cout << "Using function void Foo<int>::Bar()" << endl;
}

#endif // FOO_H
