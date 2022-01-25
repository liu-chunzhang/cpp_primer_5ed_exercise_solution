#include "Bulk_quote.h"

Bulk_quote::Bulk_quote( const string &s , double d1 , size_t n , double d2 ) : Quote( s , d1 ) , min_qty( n ) , discount( d2 ) { }

double Bulk_quote::net_price( size_t cnt ) const{
    return cnt >= min_qty ? cnt * ( 1 - discount ) * price : cnt * price ;
}
