#include "Bulk_quote.h"

Bulk_quote::Bulk_quote( const string& s , double d1 , size_t n , double d2 ) : Disc_quote( s , d1 , n , d2 ) {

}

double Bulk_quote::net_price( size_t n ) const{
    if( n >= min_qty )
        return n * ( 1 - discount ) * price ;
    else
        return n * price ;
}

void Bulk_quote::debug(){
    Quote::debug() ;
    cout << "  min_qty = " << min_qty << " # discount = " << discount << endl;
}
