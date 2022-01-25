#include "QueryResult.h"

// 友元函数
ostream &operator << ( ostream &os , const QueryResult &result ) {
    os << result.targetword << "出现了" << result.linenoset->size() << "次。" << endl;
    for( const QueryResult::lineNo num : *result.linenoset )
        os << "（第" << num + 1 << "行）" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

// 构造函数与析构函数
QueryResult::QueryResult( string target , shared_ptr<vector<string>> p1 , shared_ptr<set<lineNo>> p2 ) : targetword( target ) , linevec( p1 ) , linenoset( p2 ) { }

// 指针与迭代器
set<QueryResult::lineNo>::iterator QueryResult::begin() {
    return linenoset->begin() ;
}

set<QueryResult::lineNo>::const_iterator QueryResult::cbegin() const {
    return linenoset->cbegin() ;
}

set<QueryResult::lineNo>::iterator QueryResult::end() {
    return linenoset->end() ;
}

set<QueryResult::lineNo>::const_iterator QueryResult::cend() const {
    return linenoset->cend() ;
}

// 功能性函数
shared_ptr<vector<string>> QueryResult::get_file() {
    return linevec ;
}
