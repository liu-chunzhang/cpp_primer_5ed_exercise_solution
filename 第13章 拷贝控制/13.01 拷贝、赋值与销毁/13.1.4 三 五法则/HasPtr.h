#ifndef HASPTR_H
#define HASPTR_H

#include <iostream>
#include <memory>
using namespace std;        // ��ȷ���ļ��ɴ�ͬһ���HasPtr�ļ������ȡ

class HasPtr{                                                                        // ���ǽ̲������еİ汾��û��ʹ������ָ�룡
    public:
        HasPtr( const string &s = string() ) : ps( new string( s ) ) , i( 0 ) { }
        ~HasPtr() { delete ps ; }

    private:
        string* ps ;
        int i ;
};

#endif // HASPTR_H
