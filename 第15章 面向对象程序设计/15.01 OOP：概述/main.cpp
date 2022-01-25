// 本程序用于验证教材中15.1节内容的可靠性，并提供感性认知
#include "Bulk_quote.h"

double print_total( ostream &out , const Quote &item , size_t n ) ;

int main() {
    Quote item1( "978-7-121-15535-2" , 128.00 ) ;
    Bulk_quote item2( "978-7-121-12332-0" , 89.00 , 5 , 0.05 ) ;
    print_total( cout , item1 , 3 ) ;
    print_total( cout , item1 , 6 ) ;
    print_total( cout , item2 , 3 ) ;
    print_total( cout , item2 , 6 ) ;
    return 0;
}

double print_total( ostream &out , const Quote &item , size_t n ){
    double ret = item.net_price( n ) ;
    out << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret ;
}
