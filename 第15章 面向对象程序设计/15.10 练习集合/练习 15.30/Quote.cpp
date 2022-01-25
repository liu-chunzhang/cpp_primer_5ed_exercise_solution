#include "Quote.h"

// 构造函数与析构函数
Quote::Quote( const string &book , double sales_price ) : price( sales_price ) , bookNo( book ) { }

Quote::Quote( const Quote &quote ) : price( quote.price ) , bookNo( quote.bookNo ) { }

Quote &Quote::operator = ( const Quote &quote ) {
    price = quote.price ;
    bookNo = quote.bookNo ;
    return *this ;
}

// 功能性函数
string Quote::isbn() const {
    return bookNo ;
}

double Quote::net_price( size_t n ) const {
    return n * price ;
}

void Quote::debug() const {
    cout << "Quote:\tprice " << price << "\tISBN " << bookNo << endl;
}

Quote *Quote::clone() const & {
    return new Quote( *this ) ;
}

Quote *Quote::clone() && {
    return new Quote( std::move( *this ) ) ;
}
