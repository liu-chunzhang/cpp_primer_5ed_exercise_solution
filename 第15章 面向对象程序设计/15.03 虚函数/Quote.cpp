#include "Quote.h"
// 构造函数与析构函数
Quote::Quote( const string &book , double sales_price ) : price( sales_price ) , bookNo( book ) { }

// 功能性函数
string Quote::isbn() const {
    return bookNo ;
}

double Quote::net_price( size_t n ) const {
    cout << "Using function Quote::net_price( size_t n ) const" << endl;
    return n * price ;
}
