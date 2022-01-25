#include "NotQuery.h"

namespace chapter15 {
    Query operator ~ ( const Query &q ) {
        return std::shared_ptr<Query_base>( new NotQuery( q ) ) ;
    }

    NotQuery::NotQuery( const Query &q ) : query( q ) { }

    std::string NotQuery::rep() const {
        return "~(" + query.rep() + ")" ;
    }

    chapter10::QueryResult NotQuery::eval( const chapter10::TextQuery &tq ) const {
        chapter10::QueryResult temqr = query.eval( tq ) ;
        std::shared_ptr<std::set<lineNo>> temp = std::make_shared<std::set<lineNo>>() ;
        std::set<lineNo>::const_iterator start = temqr.cbegin() , termi = temqr.cend() ;
        size_t temsize = temqr.get_file()->size() ;
        for( size_t i = 0 ; i != temsize ; ++i )
            if( start == termi || *start != i )
                temp->insert( i ) ;
            else if( start != termi )
                    ++start ;
        return chapter10::QueryResult( rep() , temqr.get_file() , temp ) ;
    }
}
