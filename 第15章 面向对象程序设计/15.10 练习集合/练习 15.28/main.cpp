// 本程序用于验证读者在练习15.28中的想法，并在必要的地方予以说明
#include <fstream>
#include <vector>
#include "Bulk_quote.h"

int main() {
    vector<Quote> Qvec ;
    ifstream in( "data.txt" ) ;
    Bulk_quote bq ;
    while( in >> bq )
        Qvec.push_back( bq ) ;
    double sum = 0 ;
    for( const Quote &t : Qvec )
        sum += t.net_price( 1 ) ;
    cout << sum << endl;                           // 打印结果是257.16
    sum = 0 ;
    for( const Quote &t : Qvec )
        sum += t.net_price( 4 ) ;
    cout << sum << endl;                           // 打印结果是1028.64
    return 0;
}
