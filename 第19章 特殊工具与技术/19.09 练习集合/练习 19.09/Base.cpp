#include "Base.h"

bool operator == ( const Base &lhs , const Base &rhs ) {
    return typeid( lhs ) == typeid( rhs ) && lhs.equal( rhs ) ;
}

Base::Base( int i ) : bval( i ) { }

bool Base::equal( const Base &rhs ) const {
    return bval == rhs.bval ;
}

Derived::Derived( int i , int j ) : Base( i ) , dval( j ) { }

bool Derived::equal( const Base &rhs ) const {
    const Derived &d = dynamic_cast<const Derived&>( rhs ) ;
    return bval == d.bval && dval == d.dval ;
}
