#ifndef BINARYQUERY_H
#define BINARYQUERY_H

#include "Query.h"

namespace chapter15 {
    class BinaryQuery : public Query_base {
        protected:
            BinaryQuery( const Query &l , const Query &r , std::string s ) ;

        protected:
            std::string rep() const ;

        protected:
            Query lhs , rhs ;                                           // 左侧和右侧运算对象
            std::string opSym ;                                        // 运算符的名字
    };
}

#endif // BINARYQUERY_H
