#include "Quote.h"

Quote::Quote( const string &s , double d ) : price( d ) , bookNo( s ) { }

string Quote::isbn() const {
    return bookNo ;
}

double Quote::net_price( size_t n ) const {
    return price * n ;
}
