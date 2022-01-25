#include "QueryResult.h"

ostream &operator << ( ostream &os , const QueryResult &result ) {
    os << result.targetword << "出现了" << result.linenoset->size() << "次。" << endl;
    for( const QueryResult::lineNo num : *result.linenoset )
        os << "（第" << num + 1 << "行）" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

QueryResult::QueryResult( string target , shared_ptr<set<lineNo>> p1 , shared_ptr<vector<string>> p2 ) : targetword( target ) , linenoset( p1 ) , linevec( p2 ) { }
