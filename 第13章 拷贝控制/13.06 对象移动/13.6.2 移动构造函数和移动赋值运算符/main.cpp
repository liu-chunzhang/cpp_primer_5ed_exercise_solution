// 本程序用于验证教材中13.6.2节内容的可靠性，并提供感性认知
#include "Folder.h"
#include "Foo.h"
#include "HasPtr.h"
#include "Message.h"
#include "StrVec.h"
#include "X.h"

StrVec getVec( istream &in ) ;

int main() {
    StrVec v1 , v2 ;
    v1 = v2 ;
    cout << "1" << endl;

    X x1 , x2 = std::move( x1 ) ;               // 使用合成的移动构造函数
    hasX hx1 , hx2 = std::move( hx1 ) ;         // 使用合成的移动构造函数

    v2 = getVec( cin ) ;

    Foo x ;
    Foo y( x ) ;                               // 拷贝构造函数：x是一个左值
    Foo z( std::move( x ) ) ;                 // 拷贝构造函数，因为没定义移动构造函数

    cout << "2" << endl;
    HasPtr hp , hp2 ;
    hp = hp2 ;
    cout << "3" << endl;
    hp = std::move( hp2 ) ;
    return 0;
}

StrVec getVec( istream &in ) {
    string str ;
    StrVec Svec ;
    if( in >> str )
        Svec.push_back( str ) ;
    return Svec ;
}
