#include "TextQuery.h"

TextQuery::TextQuery( ifstream &in ) : contents( new StrVec ) {
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

QueryResult TextQuery::queryresult( const string &target ) const {
    shared_ptr<set<lineNo>> noline( new set<lineNo> ) ;
    map<string,shared_ptr<set<lineNo>>>::const_iterator position = index.find( target ) ;
    return ( ( position == index.cend() ) ? QueryResult( target , contents , noline ) : QueryResult( target , contents , position->second ) ) ;
}
