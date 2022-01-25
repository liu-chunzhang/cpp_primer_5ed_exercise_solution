// 本程序用于验证教材中15.8.0节内容的可靠性，并提供感性认知
#include "Bulk_quote.h"
#include <vector>
#include <memory>

int main() {
    vector<Quote> basket ;
    basket.push_back( Quote( "0-201-82470-1" , 50 ) ) ;
    basket.push_back( Bulk_quote( "0-201-82470-1" , 50 , 10 , 0.25 ) ) ;
    cout << basket.back().net_price( 15 ) << endl;

    vector<shared_ptr<Quote>> basket2 ;
    basket2.push_back( make_shared<Quote>( "0-201-82470-1" , 50 ) ) ;
    basket2.push_back( make_shared<Bulk_quote>( "0-201-54848-8" , 50 , 10 , 0.25 ) ) ;
    cout << basket2.back()->net_price( 15 ) << endl;
    return 0;
}
