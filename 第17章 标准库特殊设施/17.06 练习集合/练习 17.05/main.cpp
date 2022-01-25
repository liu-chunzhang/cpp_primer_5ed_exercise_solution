// ������������֤��������ϰ17.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <vector>
#include "Sales_data.h"
using matches = pair<vector<Sales_data>::size_type,pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator>> ;  // �������⣬matches�Ķ���������޸�

extern bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;
vector<matches> findBook( vector<vector<Sales_data>> &svvec , const string &s ) ;

int main() {

    return 0;
}

vector<matches> findBook( vector<vector<Sales_data>> &svvec , const string &s ) {
    vector<matches> mvec ;
    for( vector<vector<Sales_data>>::const_iterator iter = svvec.cbegin() ; iter != svvec.cend() ; ++iter ){
        pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator> result = equal_range( iter->cbegin() , iter->cend() , Sales_data( s ) , compareIsbn ) ;  // ��һ��lambda���ʽ����ԭ����compareIsbn����Ϊ��
        if( result.first != result.second )
            mvec.push_back( make_pair( iter - svvec.cbegin() , result ) ) ;                              // ����������޸ģ�ʹ��make_pair
    }
    return mvec;
}
