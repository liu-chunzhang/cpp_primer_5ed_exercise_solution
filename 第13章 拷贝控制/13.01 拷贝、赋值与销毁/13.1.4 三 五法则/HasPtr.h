#ifndef HASPTR_H
#define HASPTR_H

#include <iostream>
#include <memory>
using namespace std;        // 正确的文件可从同一层的HasPtr文件夹里获取

class HasPtr{                                                                        // 这是教材正文中的版本，没有使用智能指针！
    public:
        HasPtr( const string &s = string() ) : ps( new string( s ) ) , i( 0 ) { }
        ~HasPtr() { delete ps ; }

    private:
        string* ps ;
        int i ;
};

#endif // HASPTR_H
