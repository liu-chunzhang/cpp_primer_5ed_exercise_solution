#ifndef FOO_H
#define FOO_H

#include <algorithm>
#include <vector>
using namespace std;

class Foo {
    public:
        Foo &operator = ( const Foo &foo ) & ;

    public:
        Foo sorted() && ;           // �����ڿɸı����ֵ
        Foo sorted() const & ;     // �������κ����͵�Foo

    private:
        vector<int> data ;
};

Foo &retFoo() ;                     // ����һ�����ã�retFoo������һ����ֵ
Foo retVal() ;                      // ����һ��ֵ��retVal������һ����ֵ

#endif // FOO_H
