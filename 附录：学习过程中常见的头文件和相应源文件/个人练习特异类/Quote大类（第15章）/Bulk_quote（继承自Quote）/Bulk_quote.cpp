#include "Bulk_quote.h"

// 构造函数与析构函数
Bulk_quote::Bulk_quote( const string &book , double sellingprice , size_t units_sold , double disc ) : Quote( book , sellingprice ) , min_qty( units_sold ) , discount( disc ) { }

// 功能性函数
double Bulk_quote::net_price( size_t cnt ) const {
    return ( cnt >= min_qty ? cnt * ( 1 - discount ) * price : cnt * price ) ;
}

void Bulk_quote::debug() const {
    cout << "Bulk_quote:\tprice " << price << "\tISBN " << isbn() << "\tmin_qty " << min_qty << "\tdiscount " << discount << endl;
}
