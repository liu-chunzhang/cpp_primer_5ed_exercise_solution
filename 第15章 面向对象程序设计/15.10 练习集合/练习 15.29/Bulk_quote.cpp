#include "Bulk_quote.h"

istream &operator >> ( istream &in , Bulk_quote &disc_quote ) {
    string str ;
    in >> str >> disc_quote.price >> disc_quote.quantity >> disc_quote.discount ;
    if( in )
        disc_quote = Bulk_quote( str , disc_quote.price , disc_quote.quantity , disc_quote.discount ) ;
    else
        disc_quote = Bulk_quote() ;
    return in ;
}

double Bulk_quote::net_price( size_t cnt ) const {
    return ( cnt >= quantity ) ? cnt * ( 1 - discount ) * price : cnt * price ;
}
