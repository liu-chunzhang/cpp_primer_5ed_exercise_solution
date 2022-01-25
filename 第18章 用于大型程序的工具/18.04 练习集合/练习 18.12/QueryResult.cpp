#include "QueryResult.h"

namespace chapter10 {
// 友元函数
    std::ostream &operator << ( std::ostream &os , const QueryResult &result ) {
        os << result.targetword << "出现了" << result.linenoset->size() << "次。" << std::endl;
        for( const QueryResult::lineNo num : *result.linenoset )
            os << "（第" << num + 1 << "行）" << *( result.linevec->cbegin() + num ) << std::endl;
        return os ;
    }

// 构造函数与析构函数
    QueryResult::QueryResult( std::string target , std::shared_ptr<std::vector<std::string>> p1 , std::shared_ptr<std::set<lineNo>> p2 ) : targetword( target ) , linevec( p1 ) , linenoset( p2 ) { }

// 指针与迭代器
    std::set<QueryResult::lineNo>::iterator QueryResult::begin() {
        return linenoset->begin() ;
    }

    std::set<QueryResult::lineNo>::const_iterator QueryResult::cbegin() const {
        return linenoset->cbegin() ;
    }

    std::set<QueryResult::lineNo>::iterator QueryResult::end() {
        return linenoset->end() ;
    }

    std::set<QueryResult::lineNo>::const_iterator QueryResult::cend() const {
        return linenoset->cend() ;
    }

// 功能性函数
    std::shared_ptr<std::vector<std::string>> QueryResult::get_file() {
        return linevec ;
    }
}
