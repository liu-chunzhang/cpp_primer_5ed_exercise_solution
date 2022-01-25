#include "Foo.h"

Foo &Foo::operator = ( const Foo &foo ) & {
    return *this ;
}

Foo Foo::sorted() && {
    sort( data.begin() , data.end() ) ;
    return *this ;
}

Foo Foo::sorted() const & {
    Foo ret( *this ) ;                              // 拷贝一个副本
    sort( ret.data.begin() , ret.data.end() ) ;    // 排序副本
    return ret ;                                    // 返回副本
}

Foo &retFoo() {
    static Foo foo ;
    return foo ;
}

Foo retVal() {
    Foo foo ;
    return foo ;
}
