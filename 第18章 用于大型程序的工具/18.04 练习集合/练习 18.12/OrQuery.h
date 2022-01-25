#ifndef ORQUERY_H
#define ORQUERY_H

#include "BinaryQuery.h"

namespace chapter15 {
    class OrQuery : public BinaryQuery {
        friend Query operator | ( const Query &l , const Query &r ) ;

        private:
            OrQuery( const Query &l , const Query &r ) ;

        private:
            chapter10::QueryResult eval( const chapter10::TextQuery &tq ) const override ;
    };
}

#endif // ORQUERY_H
