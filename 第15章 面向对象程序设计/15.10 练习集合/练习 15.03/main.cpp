// 本程序用于验证读者在练习15.3中的想法，并在必要的地方予以说明
#include "Quote.h"

void print_total( ostream &out , const Quote &item , size_t n ) ;

int main() {
    Quote item1( "978-7-121-15535-2" , 128.00 ) ;
    print_total( cout , item1 , 3 ) ;
    print_total( cout , item1 , 6 ) ;
    return 0;
}

void print_total( ostream &out , const Quote &item , size_t n ) {
    out << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << item.net_price( n ) << endl;
}
