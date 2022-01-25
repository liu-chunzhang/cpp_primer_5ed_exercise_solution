#ifndef ANDQUERY_H
#define ANDQUERY_H

#include <algorithm>
#include <iterator>
#include "BinaryQuery.h"

class AndQuery : public BinaryQuery{
    friend Query operator & ( const Query &l , const Query &r ) ;

    private:
        AndQuery( const Query &l , const Query &r ) ;

    private:
        QueryResult eval( const TextQuery &tq ) const override ;
};

#endif // ANDQUERY_H
