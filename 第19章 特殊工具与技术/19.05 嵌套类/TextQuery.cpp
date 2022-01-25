#include "TextQuery.h"

int TextQuery::QueryResult::static_mem = 1024 ;

TextQuery::TextQuery( ifstream &in ) : contents( new vector<string> ) {
    string text ;
    while( getline( in , text ) ){
        contents->push_back( text ) ;
        istringstream line( text ) ;
        string word ;
        lineNo lineno = contents->size() - 1 ;
        while( line >> word ){
            shared_ptr<set<lineNo>> &lines = index[word] ;
            if( !lines )
                lines.reset( new set<lineNo> ) ;
            lines->insert( lineno ) ;
        }
    }
}

TextQuery::QueryResult TextQuery::queryresult( const string &target ) const {
    shared_ptr<set<lineNo>> noline( new set<lineNo> ) ;
    map<string,shared_ptr<set<lineNo>>>::const_iterator position = index.find( target ) ;
    return ( ( position == index.cend() ) ? QueryResult( target , contents , noline ) : QueryResult( target , contents , position->second ) ) ;
}

ostream &operator << ( ostream &os , const TextQuery::QueryResult &result ) {
    os << result.targetword << "出现了" << result.linenoset->size() << "次。" << endl;
    for( const TextQuery::QueryResult::lineNo num : *result.linenoset )
        os << "（第" << num + 1 << "行）" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

TextQuery::QueryResult::QueryResult( string target , shared_ptr<vector<string>> p1 , shared_ptr<set<lineNo>> p2 ) : targetword( target ) , linevec( p1 ) , linenoset( p2 ) { }
