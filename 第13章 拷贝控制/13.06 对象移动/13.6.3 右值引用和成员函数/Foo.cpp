#include "Foo.h"

Foo &Foo::operator = ( const Foo &foo ) & {
    return *this ;
}

Foo Foo::sorted() && {
    sort( data.begin() , data.end() ) ;
    return *this ;
}

Foo Foo::sorted() const & {
    Foo ret( *this ) ;                              // ����һ������
    sort( ret.data.begin() , ret.data.end() ) ;    // ���򸱱�
    return ret ;                                    // ���ظ���
}

Foo &retFoo() {
    static Foo foo ;
    return foo ;
}

Foo retVal() {
    Foo foo ;
    return foo ;
}
