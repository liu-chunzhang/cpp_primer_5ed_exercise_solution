#ifndef NOTQUERY_H
#define NOTQUERY_H

#include "Query.h"

namespace chapter15 {
    class NotQuery : public Query_base {
        friend Query operator ~ ( const Query &q ) ;

        private:
            NotQuery( const Query &q ) ;

        private:
            std::string rep() const ;
            chapter10::QueryResult eval( const chapter10::TextQuery &tq ) const override ;

        private:
            Query query ;
    };
}

#endif // NOTQUERY_H
