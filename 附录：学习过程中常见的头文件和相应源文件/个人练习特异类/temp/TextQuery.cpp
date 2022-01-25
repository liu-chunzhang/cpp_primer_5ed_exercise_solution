#include "TextQuery.h"

TextQuery::TextQuery( ifstream& in ) : file( new vector<string> ){
    string text ;
    while( getline( in , text ) ){
        file->push_back( text ) ;
        int n = file->size() - 1 ;
        istringstream line( text ) ;
        string word ;
        while( line >> word ){
            auto &lines = wm[ word ] ;
            if( !lines )
                lines.reset( new set<line_no> ) ;
            lines->insert( n ) ;
        }
    }
}

QueryResult TextQuery::query( const string& s ) const {
    static shared_ptr<set<line_no>> nodata( new set<line_no> ) ;
    auto loc = wm.find( s ) ;
    if( loc == wm.end() )
        return QueryResult( s , nodata , file ) ;
    else
        return QueryResult( s , loc->second , file ) ;
}

TextQuery::~TextQuery() { }
