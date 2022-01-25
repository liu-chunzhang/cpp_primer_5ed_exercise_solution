#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query_base.h"

namespace chapter15 {
    class Query_base ;

    class WordQuery : public Query_base {
        friend class Query ;                                // Queryʹ��WordQuery���캯��

        private:
            WordQuery( const std::string &s ) ;                    // ������ࣺWordQuery���������м̳ж����Ĵ��麯��

        private:
            std::string rep() const ;
            chapter10::QueryResult eval( const chapter10::TextQuery &tq ) const override ;

        private:
            std::string query_word ;                              // Ҫ���ҵĵ���
    };
}

#endif // WORDQUERY_H
