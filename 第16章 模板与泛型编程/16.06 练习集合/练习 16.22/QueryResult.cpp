#include "QueryResult.h"

ostream &operator << ( ostream &os , const QueryResult &result ) {
    os << result.targetword << "出现了" << result.linenoset->size() << "次。" << endl;
    for( const QueryResult::lineNo num : *result.linenoset )
        os << "（第" << num + 1 << "行）" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

QueryResult::QueryResult( const string &target , shared_ptr<vector<string>> p1 , shared_ptr<set<lineNo>> p2 ) : targetword( target ) , linevec( p1 ) , linenoset( p2 ) { }
