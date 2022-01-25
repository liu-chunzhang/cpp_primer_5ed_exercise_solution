#include "Foo.h"

// 构造函数与析构函数
Foo::Foo( const Foo &foo ) : data( foo.data ) { }

Foo &Foo::operator = ( const Foo &foo ) & {
    data = foo.data ;
    return *this ;
}

// 功能性函数
Foo Foo::sorted() && {
    cout << "右值引用版本" ;
    sort( data.begin() , data.end() ) ;
    return *this ;
}

Foo Foo::sorted() const & {
    cout << "左值引用版本" ;
    Foo ret( *this ) ;
    return ret.sorted() ;
}
