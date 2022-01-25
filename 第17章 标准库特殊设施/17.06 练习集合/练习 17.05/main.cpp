// 本程序用于验证读者在练习17.5中的想法，并在必要的地方予以说明
#include <algorithm>
#include <vector>
#include "Sales_data.h"
using matches = pair<vector<Sales_data>::size_type,pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator>> ;  // 按照题意，matches的定义进行了修改

extern bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;
vector<matches> findBook( vector<vector<Sales_data>> &svvec , const string &s ) ;

int main() {

    return 0;
}

vector<matches> findBook( vector<vector<Sales_data>> &svvec , const string &s ) {
    vector<matches> mvec ;
    for( vector<vector<Sales_data>>::const_iterator iter = svvec.cbegin() ; iter != svvec.cend() ; ++iter ){
        pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator> result = equal_range( iter->cbegin() , iter->cend() , Sales_data( s ) , compareIsbn ) ;  // 用一个lambda表达式代替原来的compareIsbn，更为简单
        if( result.first != result.second )
            mvec.push_back( make_pair( iter - svvec.cbegin() , result ) ) ;                              // 这里进行了修改，使用make_pair
    }
    return mvec;
}
