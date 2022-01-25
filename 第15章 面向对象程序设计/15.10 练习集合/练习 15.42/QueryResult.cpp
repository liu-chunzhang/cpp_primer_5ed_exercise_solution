#include "QueryResult.h"

// 友元函数
ostream &operator << ( ostream &os , const QueryResult &result ) {
    os << result.targetword << "出现了" << result.linenoset->size() << "次。" << endl;
    for( const QueryResult::lineNo num : *result.linenoset )
        os << "（第" << num + 1 << "行）" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

void limitedPrint( const QueryResult &result , size_t start , size_t termi ) {
    cout << result.targetword << "在全文里总计出现了" << result.linenoset->size() << "次。" << endl;
    size_t count_num = 0 ;
    for( const QueryResult::lineNo num : *result.linenoset )
        if( num + 1 >= start && num + 1 <= termi ){
            cout << "（第" << num + 1 << "行）" << *( result.linevec->cbegin() + num ) << endl;
            ++count_num ;
        }
    string linesolution = ( start == termi ? "第" + to_string( start ) + "行内" : "第" + to_string( start ) + "行到第" + to_string( termi ) + "行" ) ;
    if( count_num == 0 )
        cout << linesolution << "未检测到" << result.targetword << "。" << endl;
    else
        cout << linesolution << "总共检测到" << result.targetword << "有" << count_num << "次。" << endl;
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
