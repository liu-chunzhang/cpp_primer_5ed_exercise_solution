#ifndef ANDQUERY_H
#define ANDQUERY_H

#include <algorithm>
#include "BinaryQuery.h"

class AndQuery : public BinaryQuery{
    friend Query operator & ( const Query& , const Query& ) ;

    private:
        AndQuery( const Query& , const Query& ) ;
        QueryResult eval( const TextQuery& ) const ;
};

#endif // ANDQUERY_H
