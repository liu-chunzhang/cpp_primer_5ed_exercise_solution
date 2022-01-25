#include "TextQuery.h"

TextQuery::TextQuery( ifstream &in ) : file( new vector<string> ) {
    string text ;
    while( getline( in , text ) ){
        file->push_back( text ) ;
        lineNo lineno = file->size() - 1 ;
        istringstream line( text ) ;
        string word ;
        while( line >> word ){
            shared_ptr<set<lineNo>> &lines = wm[word] ;      // 这个地方一定得是引用，否则无法正确改写set<lineNo>
            if( !lines )
                lines.reset( new set<lineNo> ) ;
            lines->insert( lineno ) ;
        }
    }
}

QueryResult TextQuery::queryresult( const string &target ) const {
    shared_ptr<set<lineNo>> noline( new set<lineNo> ) ;
    map<string,shared_ptr<set<lineNo>>>::const_iterator position = wm.find( target ) ;
    return ( ( position == wm.cend() ) ? QueryResult( target , noline , file ) : QueryResult( target , position->second , file ) ) ;
}
