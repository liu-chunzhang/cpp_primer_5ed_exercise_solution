// 本程序用于验证教材中11.2.2节内容的可靠性，并提供感性认知
#include <fstream>
#include <iterator>
#include <set>
#include "Sales_data.h"

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

int main() {
    ifstream in( "data.txt" ) ;
    Sales_data temp ;
    multiset<Sales_data,decltype(compareIsbn)*> bookstore( compareIsbn ) ;
    while( in >> temp )
        bookstore.insert( temp ) ;
    cout << bookstore.size() << endl;
    copy( bookstore.cbegin() , bookstore.cend() , ostream_iterator<Sales_data>( cout , "\n" ) ) ;
    return 0;
}

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) {
    return lhs.isbn() < rhs.isbn() ;
}
