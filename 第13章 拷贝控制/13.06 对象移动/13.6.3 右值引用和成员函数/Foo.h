#ifndef FOO_H
#define FOO_H

#include <algorithm>
#include <vector>
using namespace std;

class Foo {
    public:
        Foo &operator = ( const Foo &foo ) & ;

    public:
        Foo sorted() && ;           // 可用于可改变的右值
        Foo sorted() const & ;     // 可用于任何类型的Foo

    private:
        vector<int> data ;
};

Foo &retFoo() ;                     // 返回一个引用；retFoo调用是一个左值
Foo retVal() ;                      // 返回一个值；retVal调用是一个右值

#endif // FOO_H
