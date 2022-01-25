#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "QueryResult.h"

namespace chapter10 {
    class QueryResult ;

    class TextQuery {
        public:
            using lineNo = QueryResult::lineNo ;

        public:
            TextQuery() = delete ;
            TextQuery( std::ifstream &in ) ;
            ~TextQuery() = default ;

        public:
            QueryResult queryresult( const std::string &target ) const ;

        private:
            std::shared_ptr<std::vector<std::string>> contents ;
            std::map<std::string,std::shared_ptr<std::set<lineNo>>> index ;
    };
}

#endif // TEXTQUERY_H
