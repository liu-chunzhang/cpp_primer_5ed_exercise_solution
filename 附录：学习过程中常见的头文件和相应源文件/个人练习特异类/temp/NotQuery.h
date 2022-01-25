#ifndef NOTQUERY_H
#define NOTQUERY_H

#include "Query.h"

class NotQuery : public Query_base {
    friend Query operator ~ ( const Query& ) ;

    private:
        NotQuery( const Query& ) ;
        string rep() const ;
        QueryResult eval( const TextQuery& ) const ;
        Query query ;
};

#endif // NOTQUERY_H
