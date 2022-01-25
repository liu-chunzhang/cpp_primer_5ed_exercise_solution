#include "Quote.h"

ostream& operator << ( ostream& out , Quote& q ) {
    out << "Using operator << ( ostream& , Quote& );" << endl;
    return out ;
}

Quote::Quote( const string& s = " " , double d = 0.0 ) : bookNo( s ) , price( d ) {
    cout << "Quote constructor is running." << endl;
}

Quote::Quote( const Quote& q ) : bookNo( q.bookNo ) , price( q.price ) { }

Quote::Quote( Quote&& q ) : bookNo( q.bookNo ) , price( q.price ) { }

Quote::~Quote() {
    cout << "Quote destructor is running." << endl;
}

string Quote::isbn() const {
    return bookNo ;
}

double Quote::net_price( size_t n ) const {
    return n * price ;
}

void Quote::debug(){
    cout << "ISBN: " << bookNo << " # price: " << price << endl;
}
