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
            Query lhs , rhs ;                                           // �����Ҳ��������
            std::string opSym ;                                        // �����������
    };
}

#endif // BINARYQUERY_H
