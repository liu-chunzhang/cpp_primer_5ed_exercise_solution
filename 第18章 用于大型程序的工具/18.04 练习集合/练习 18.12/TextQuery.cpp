#include "TextQuery.h"

namespace chapter10 {
    TextQuery::TextQuery( std::ifstream &in ) : contents( new std::vector<std::string> ) {
        std::string text ;
        while( getline( in , text ) ){
            contents->push_back( text ) ;
            std::istringstream line( text ) ;
            std::string word ;
            lineNo lineno = contents->size() - 1 ;
            while( line >> word ){
                std::shared_ptr<std::set<lineNo>> &lines = index[word] ;
                if( !lines )
                    lines.reset( new std::set<lineNo> ) ;
                lines->insert( lineno ) ;
            }
        }
    }

    QueryResult TextQuery::queryresult( const std::string &target ) const {
        std::shared_ptr<std::set<lineNo>> noline( new std::set<lineNo> ) ;
        std::map<std::string,std::shared_ptr<std::set<lineNo>>>::const_iterator position = index.find( target ) ;
        return ( ( position == index.cend() ) ? QueryResult( target , contents , noline ) : QueryResult( target , contents , position->second ) ) ;
    }
}
