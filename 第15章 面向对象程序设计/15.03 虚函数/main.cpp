// 本程序用于验证教材中15.3节内容的可靠性，并提供感性认知
#include "Bulk_quote.h"
#include "B.h"

double print_total( ostream &out , const Quote &item , size_t n ) ;

int main() {
    Quote base( "0-201-82470-1" , 50 ) ;
    print_total( cout , base , 10 ) ;                               // 调用Quote::net_price
    Bulk_quote derived( "0-201-82470-1" , 50 , 5 , 0.19 ) ;
    print_total( cout , derived , 10 ) ;                            // 调用Bulk_quote::net_price

    base = derived ;
    base.net_price( 20 ) ;                                           // 调用Quote::net_price

    Bulk_quote *bq = &derived ;
    double undiscounted1 = bq->Quote::net_price( 42 ) ;
    double undiscounted2 = bq->Bulk_quote::net_price( 42 ) ;
    cout << undiscounted1 << " " << undiscounted2 ;
    return 0;
}

double print_total( ostream &out , const Quote &item , size_t n ){
    double ret = item.net_price( n ) ;
    out << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret ;
}
