// 本程序用于验证教材中17.1.2节内容的可靠性，并提供感性认知
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
    vector<matches> ret ;                                                                                       // 初始化为空vector
    for( vector<vector<Sales_data>>::const_iterator it = files.cbegin() ; it != files.cend() ; ++it ){                                                          // 对每家书店，查找与给定书籍匹配的记录范围（若存在的话），auto代表的类型是vector<vector<Sales_data>>::const_iterator
        pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator> found = equal_range( it->cbegin() , it->cend() , book , compareIsbn ) ;  // auto代表的类型是pair<vector<Sales_data>::const_iterator,vector<Sales_data>::const_iterator>
        if( found.first != found.second )                                                        // 若书店销售了给定书籍
            ret.push_back( make_tuple( it - files.cbegin() , found.first , found.second ) ) ;   // 记录此书店的索引及匹配范围
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
