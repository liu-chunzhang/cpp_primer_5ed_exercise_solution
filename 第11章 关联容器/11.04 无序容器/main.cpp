// 本程序用于验证教材中11.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include "Sales_data.h"

size_t hasher( const Sales_data &sd ) ;
bool eqOp( const Sales_data &lhs , const Sales_data &rhs ) ;

using SD_multiset = unordered_multiset<Sales_data,decltype(hasher)*,decltype(eqOp)*> ;

int main() {
    unordered_map<string,size_t> word_count ;
    string word ;
    ifstream in( "data.txt" ) ;
    while( in >> word )
        ++word_count[ word ] ;
    for( const pair<string,size_t> &w : word_count )
        cout << w.first << " occurs " << w.second << ( ( w.second > 1 ) ? " times." : " time." ) << endl;
    cout << word_count.bucket_count() << endl;
    cout << word_count.max_bucket_count() << endl;
    for( unsigned i = 0 ; i != word_count.bucket_count() ; ++i )
        cout << "第" << i << "个桶里有" << word_count.bucket_size( i ) << "个元素。" << endl;
    cout << word_count.load_factor() << endl;
    cout << word_count.max_load_factor() << endl;
    word_count.rehash( 3 ) ;
    cout << word_count.max_load_factor() << endl;

    SD_multiset bookstore( 42 , hasher , eqOp ) ;

    unordered_multiset<Sales_data,decltype(hasher)*> Sl( 10 , hasher ) ;  // 由于Sales_data类里我重载了==运算符，所以可以只重载Hash函数
    return 0;
}

size_t hasher( const Sales_data &sd ) {
    return hash<string>()( sd.isbn() ) ;
}
bool eqOp( const Sales_data &lhs , const Sales_data &rhs ) {
    return lhs.isbn() == rhs.isbn() ;
}
