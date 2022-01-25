#ifndef ANDQUERY_H
#define ANDQUERY_H

#include <algorithm>
#include "BinaryQuery.h"

class AndQuery : public BinaryQuery{
    friend Query operator & ( const Query &l , const Query &r ) ;

    private:
        AndQuery( const Query &left , const Query &right ) ;

    private:
        QueryResult eval( const TextQuery &t ) const ;
};

#endif // ANDQUERY_H
