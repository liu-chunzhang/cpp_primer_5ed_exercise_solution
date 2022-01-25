#include "TextQuery.h"

TextQuery::TextQuery( ifstream &in ) : file( new vector<string> ) {
    string text ;
    while( getline( in , text ) ){
        file->push_back( text ) ;
        line_no lineNo = file->size() - 1 ;
        istringstream line( text ) ;
        string word ;
        while( line >> word ){
            shared_ptr<set<line_no>> &lines = wm[word] ;      // 这个地方一定得是引用，否则无法正确改写set<line_no>
            if( !lines )
                lines.reset( new set<line_no> ) ;
            lines->insert( lineNo ) ;
        }
    }
}

QueryResult TextQuery::query( const string &target ) const {
    shared_ptr<set<line_no>> nodata( new set<line_no> ) ;
    map<string,shared_ptr<set<line_no>>>::const_iterator position = wm.find( target ) ;
    return ( ( position == wm.cend() ) ? QueryResult( target , nodata , file ) : QueryResult( target , position->second , file ) ) ;
}
