#ifndef ORQUERY_H
#define ORQUERY_H

#include "BinaryQuery.h"

class OrQuery : public BinaryQuery {
    friend Query operator | ( const Query& , const Query& ) ;

    private:
        OrQuery( const Query& , const Query& ) ;
        QueryResult eval( const TextQuery& ) const ;
};

#endif // ORQUERY_H
