#ifndef BINARYQUERY_H
#define BINARYQUERY_H

#include "Query.h"

class BinaryQuery : public Query_base {
    protected:
        BinaryQuery( const Query &l , const Query &r , string s ) ;
        string rep() const ;

    protected:
        Query lhs , rhs ;                                           // �����Ҳ��������
        string opSym ;                                             // �����������
};

#endif // BINARYQUERY_H
