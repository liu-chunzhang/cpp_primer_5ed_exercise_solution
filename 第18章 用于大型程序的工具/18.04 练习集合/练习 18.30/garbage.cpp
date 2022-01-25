#include "garbage.h"

Base::Base() : ival( 0 ) { }

Base::Base( int i ) : ival( i ) { }

int Base::getival() const {
    return ival ;
}

D1::D1() : Base( 1 ) { }

D1::D1( int i , int j ) : Base( i ) , iival( j ) { }

int D1::getiival() const {
    return iival ;
}

D2::D2() : Base( 1 ) { }

D2::D2( int i ) : Base( i ) { }

MI::MI() : Base( 0 ) { }

MI::MI( int i ) : Base( i + 99 ) , D1( i + 999 , i + 999 ) , D2( i + 9999 ) { }

Final::Final() : Base( 0 ) { }

Final::Final( int i ) : Base( i ) , MI( i ) { }
