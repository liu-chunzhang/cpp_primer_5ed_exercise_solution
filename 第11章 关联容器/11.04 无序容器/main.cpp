// ������������֤�̲���11.4�����ݵĿɿ��ԣ����ṩ������֪
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
        cout << "��" << i << "��Ͱ����" << word_count.bucket_size( i ) << "��Ԫ�ء�" << endl;
    cout << word_count.load_factor() << endl;
    cout << word_count.max_load_factor() << endl;
    word_count.rehash( 3 ) ;
    cout << word_count.max_load_factor() << endl;

    SD_multiset bookstore( 42 , hasher , eqOp ) ;

    unordered_multiset<Sales_data,decltype(hasher)*> Sl( 10 , hasher ) ;  // ����Sales_data������������==����������Կ���ֻ����Hash����
    return 0;
}

size_t hasher( const Sales_data &sd ) {
    return hash<string>()( sd.isbn() ) ;
}
bool eqOp( const Sales_data &lhs , const Sales_data &rhs ) {
    return lhs.isbn() == rhs.isbn() ;
}
