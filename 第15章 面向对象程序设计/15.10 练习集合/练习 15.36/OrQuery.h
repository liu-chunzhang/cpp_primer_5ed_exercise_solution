#ifndef ORQUERY_H
#define ORQUERY_H

#include "BinaryQuery.h"

class OrQuery : public BinaryQuery {
    friend Query operator | ( const Query &l , const Query &r ) ;

    private:
        OrQuery( const Query &l , const Query &r ) ;
};

#endif // ORQUERY_H
