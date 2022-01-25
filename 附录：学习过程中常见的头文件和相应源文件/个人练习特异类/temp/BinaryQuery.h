#ifndef BINARYQUERY_H
#define BINARYQUERY_H

#include "Query.h"

class BinaryQuery : public Query_base {
    protected:
        BinaryQuery( const Query& , const Query& , string ) ;
        string rep() const ;
        Query lhs , rhs ;                                           // 左侧和右侧运算对象
        string opSym ;                                             // 运算符的名字
};

#endif // BINARYQUERY_H
