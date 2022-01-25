// ������������֤��������ϰ17.4�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <tuple>
#include <vector>
#include "Sales_data.h"

using matches = tuple<vector<Sales_data>::size_type,vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator> ;

vector<matches> findBook( vector<vector<Sales_data>> &svvec , const string &s ) ;
extern bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

int main() {

    return 0;
}

vector<matches> findBook( vector<vector<Sales_data>> &svvec , const string &s ) {
    vector<matches> mvec ;
    for( vector<vector<Sales_data>>::const_iterator iter = svvec.cbegin() ; iter != svvec.cend() ; ++iter ){
        pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator> result = equal_range( iter->cbegin() , iter->cend() , Sales_data( s ) , compareIsbn ) ;                // ��Ϊʹ����explicit��Sales_data�Ĺ��캯�������Դ˴�������ʽ����
        if( result.first != result.second )
            mvec.push_back( make_tuple( iter - svvec.cbegin() , result.first , result.second ) ) ;
    }
    return mvec;
}
