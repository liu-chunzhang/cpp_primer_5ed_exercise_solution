#include "Bulk_quote.h"

double Bulk_quote::net_price( size_t cnt ) const {
    return ( cnt >= quantity ? cnt * ( 1 - discount ) * price : cnt * price ) ;
}

Bulk_quote *Bulk_quote::clone() const & {
    return new Bulk_quote( *this ) ;
}

Bulk_quote *Bulk_quote::clone() && {
    return new Bulk_quote( std::move( *this ) ) ;
}

namespace libs_R_us {
    void print( int i ) {
        std::cout << i << std::endl;
    }

    void print( double d ) {
        std::cout << d << std::endl;
    }
}
