#include "WordQuery.h"

namespace chapter15 {
    WordQuery::WordQuery( const std::string &s ) : query_word( s ) { }

    std::string WordQuery::rep() const {
        return query_word ;
    }

    chapter10::QueryResult WordQuery::eval( const chapter10::TextQuery &tq ) const {
        return tq.queryresult( query_word ) ;
    }
}
