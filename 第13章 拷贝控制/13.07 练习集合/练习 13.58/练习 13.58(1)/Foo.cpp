#include "Foo.h"

// ���캯������������
Foo::Foo( const Foo &foo ) : data( foo.data ) { }

Foo &Foo::operator = ( const Foo &foo ) & {
    data = foo.data ;
    return *this ;
}

// �����Ժ���
Foo Foo::sorted() && {
    cout << "��ֵ���ð汾" ;
    sort( data.begin() , data.end() ) ;
    return *this ;
}

Foo Foo::sorted() const & {
    cout << "��ֵ���ð汾" ;
    Foo ret( *this ) ;
    return ret.sorted() ;
}
