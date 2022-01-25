#include "Bulk_quote.h"

ostream& operator << ( ostream& out , Bulk_quote& q ) {
    out << "Using operator << ( ostream& , Bulk_quote& );" << endl;
    return out ;
}

Bulk_quote::Bulk_quote( const string& s , double d1 , size_t n , double d2 ) : Disc_quote( s , d1 , n , d2 ) {
    cout << "Bulk_quote constructor is running." << endl;
}

Bulk_quote::~Bulk_quote( ) {
    cout << "Bulk_quote destructor is running." << endl;
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
