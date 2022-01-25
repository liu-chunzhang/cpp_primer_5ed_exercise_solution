#include "Base.h"

Base &Base::operator = ( const Base &b ) {
    *this = b ;
    return *this ;
}

D::D( const D &d ) : Base( d ) { }              // 拷贝基类成员

D::D( D&& d ) : Base( std::move( d ) ) { }      // 移动基类成员

D &D::operator = ( const D &d ) {
    Base::operator = ( d ) ;
    return *this ;
}
