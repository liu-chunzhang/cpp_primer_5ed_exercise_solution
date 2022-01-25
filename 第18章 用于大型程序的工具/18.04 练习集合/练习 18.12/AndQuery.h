#ifndef ANDQUERY_H
#define ANDQUERY_H

#include <algorithm>
#include <iterator>
#include "BinaryQuery.h"

namespace chapter15 {
    class AndQuery : public BinaryQuery{
        friend Query operator & ( const Query &l , const Query &r ) ;

        private:
            AndQuery( const Query &l , const Query &r ) ;

        private:
            chapter10::QueryResult eval( const chapter10::TextQuery &tq ) const override ;
    };
}

#endif // ANDQUERY_H
