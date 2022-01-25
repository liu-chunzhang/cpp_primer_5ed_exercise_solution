// ������������֤�̲���17.1.2�����ݵĿɿ��ԣ����ṩ������֪
#include <algorithm>
#include <numeric>
#include <tuple>
#include <vector>
#include "Sales_data.h"

typedef tuple<vector<Sales_data>::size_type,vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator> matches ;

vector<matches> FindBook( const vector<vector<Sales_data>> &files , const string &book ) ;
extern bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;
void reportResults( istream &in , ostream &out , const vector<vector<Sales_data>> &files ) ;

int main() {

    return 0;
}

vector<matches> FindBook( const vector<vector<Sales_data>> &files , const string &book ) {
    vector<matches> ret ;                                                                                       // ��ʼ��Ϊ��vector
    for( vector<vector<Sales_data>>::const_iterator it = files.cbegin() ; it != files.cend() ; ++it ){                                                          // ��ÿ����꣬����������鼮ƥ��ļ�¼��Χ�������ڵĻ�����auto�����������vector<vector<Sales_data>>::const_iterator
        pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator> found = equal_range( it->cbegin() , it->cend() , book , compareIsbn ) ;  // auto�����������pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator>
        if( found.first != found.second )                                                        // ����������˸����鼮
            ret.push_back( make_tuple( it - files.cbegin() , found.first , found.second ) ) ;   // ��¼������������ƥ�䷶Χ
    }
    return ret ;
}

void reportResults( istream &in , ostream &out , const vector<vector<Sales_data>> &files ) {
    string str ;
    while( in >> str ){
        vector<matches> trans = FindBook( files , str ) ;
        if( trans.empty() ){
            cout << str << " not found in any stores." << endl;
            continue ;
        }
        for( const matches &store : trans )
            out << "store " << get<0>( store ) << " sales: " << accumulate( get<1>( store ) , get<2>( store ) , Sales_data( str ) ) << endl;
    }
}
