#include "TextQuery.h"

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

TextQuery::Queryresult TextQuery::queryresult( const string &target ) const {
    shared_ptr<set<lineNo>> noline( new set<lineNo> ) ;
    map<string,shared_ptr<set<lineNo>>>::const_iterator position = index.find( target ) ;
    return ( ( position == index.cend() ) ? make_tuple( target , contents , noline ) : make_tuple( target , contents , position->second ) ) ;
}
