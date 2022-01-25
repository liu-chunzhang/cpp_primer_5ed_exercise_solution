#include "Bulk_quote.h"

Bulk_quote::Bulk_quote( const string &book , double price , size_t qty , double disc ) : Disc_quote( book , price , qty , disc ) { }

double Bulk_quote::net_price( size_t cnt ) const {
    return ( cnt >= quantity ) ? cnt * ( 1 - discount ) * price : cnt * price ;
}
