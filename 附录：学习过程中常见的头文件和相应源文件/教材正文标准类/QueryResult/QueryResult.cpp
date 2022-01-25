#include "QueryResult.h"

ostream &operator << ( ostream &os , const QueryResult &result ) {
    os << result.targetword << "������" << result.linenoset->size() << "�Ρ�" << endl;
    for( const QueryResult::lineNo num : *result.linenoset )
        os << "����" << num + 1 << "�У�" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

QueryResult::QueryResult( string target , shared_ptr<set<lineNo>> p1 , shared_ptr<vector<string>> p2 ) : targetword( target ) , linenoset( p1 ) , linevec( p2 ) { }
