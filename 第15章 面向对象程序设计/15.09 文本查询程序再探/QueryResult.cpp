#include "QueryResult.h"

ostream &operator << ( ostream &os , const QueryResult &result ) {
    os << result.targetword << "出现了" << result.line_noset->size() << "次。" << endl;
    for( const QueryResult::line_no num : *result.line_noset )
        os << "（第" << num + 1 << "行）" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

QueryResult::QueryResult( string target , shared_ptr<set<line_no>> p1 , shared_ptr<vector<string>> p2 ) : targetword( target ) , line_noset( p1 ) , linevec( p2 ) { }

set<QueryResult::line_no>::iterator QueryResult::begin() {
    return line_noset->begin() ;
}

set<QueryResult::line_no>::iterator QueryResult::end() {
    return line_noset->end() ;
}

shared_ptr<vector<string>> QueryResult::get_file() {
    return linevec ;
}
