#ifndef NOTQUERY_H
#define NOTQUERY_H

#include "Query.h"

class NotQuery : public Query_base {
    friend Query operator ~ ( const Query &q ) ;

    private:
        NotQuery( const Query &q ) ;

    private:
        string rep() const ;
        QueryResult eval( const TextQuery &t ) const ;

    private:
        Query query ;
};

#endif // NOTQUERY_H
