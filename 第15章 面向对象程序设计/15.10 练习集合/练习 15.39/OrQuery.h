#ifndef ORQUERY_H
#define ORQUERY_H

#include "BinaryQuery.h"

class OrQuery : public BinaryQuery {
    friend Query operator | ( const Query &l , const Query &r ) ;

    private:
        OrQuery( const Query &l , const Query &r ) ;

    private:
        QueryResult eval( const TextQuery &tq ) const override ;
};

#endif // ORQUERY_H
