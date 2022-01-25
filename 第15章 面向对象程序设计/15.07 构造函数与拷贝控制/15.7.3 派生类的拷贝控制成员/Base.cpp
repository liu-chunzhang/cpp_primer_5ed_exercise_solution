#include "Base.h"

Base &Base::operator = ( const Base &b ) {
    *this = b ;
    return *this ;
}

D::D( const D &d ) : Base( d ) { }              // ���������Ա

D::D( D&& d ) : Base( std::move( d ) ) { }      // �ƶ������Ա

D &D::operator = ( const D &d ) {
    Base::operator = ( d ) ;
    return *this ;
}
