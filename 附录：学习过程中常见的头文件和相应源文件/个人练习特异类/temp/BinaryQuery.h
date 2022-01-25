#ifndef BINARYQUERY_H
#define BINARYQUERY_H

#include "Query.h"

class BinaryQuery : public Query_base {
    protected:
        BinaryQuery( const Query& , const Query& , string ) ;
        string rep() const ;
        Query lhs , rhs ;                                           // �����Ҳ��������
        string opSym ;                                             // �����������
};

#endif // BINARYQUERY_H
