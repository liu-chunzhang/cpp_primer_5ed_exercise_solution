// ������������֤��������ϰ17.6�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
        auto result = equal_range( iter->cbegin() , iter->cend() , Sales_data( s ) , compareIsbn ) ;  // ��һ��lambda���ʽ����ԭ����compareIsbn����Ϊ��
        if( result.first != result.second )
            mvec.push_back( matches( iter - svvec.cend() , result.first , result.second ) ) ;
    }
    return mvec;
}
