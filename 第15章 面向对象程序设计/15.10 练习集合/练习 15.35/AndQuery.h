#ifndef ANDQUERY_H
#define ANDQUERY_H

#include <algorithm>
#include "BinaryQuery.h"

class AndQuery : public BinaryQuery{
    friend Query operator & ( const Query &l , const Query &r ) ;

    private:
        AndQuery( const Query &l , const Query &r ) ;
};

#endif // ANDQUERY_H
