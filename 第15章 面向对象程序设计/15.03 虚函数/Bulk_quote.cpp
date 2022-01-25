#include "Bulk_quote.h"

Bulk_quote::Bulk_quote( const string &book , double sellingprice , size_t units_sold , double disc ) : Quote( book , sellingprice ) , min_qty( units_sold ) , discount( disc ) { }

double Bulk_quote::net_price( size_t cnt ) const {
    cout << "Using function Bulk_quote::net_price( size_t cnt ) const" << endl;
    return ( cnt >= min_qty ? cnt * ( 1 - discount ) * price : cnt * price ) ;
}
