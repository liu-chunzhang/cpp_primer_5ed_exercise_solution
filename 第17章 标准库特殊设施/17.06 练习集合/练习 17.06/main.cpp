// 本程序用于验证读者在练习17.6中的想法，并在必要的地方予以说明
#include <algorithm>
#include "matches.h"

extern bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;
vector<matches> findBook( vector<vector<Sales_data>> &svvec , const string &s ) ;

int main() {

    return 0;
}

vector<matches> findBook( vector<vector<Sales_data>> &svvec , const string &s ) {
    vector<matches> mvec ;
    for( auto iter = svvec.cbegin() ; iter != svvec.cend() ; ++iter ){
        auto result = equal_range( iter->cbegin() , iter->cend() , Sales_data( s ) , compareIsbn ) ;  // 用一个lambda表达式代替原来的compareIsbn，更为简单
        if( result.first != result.second )
            mvec.push_back( matches( iter - svvec.cend() , result.first , result.second ) ) ;
    }
    return mvec;
}
