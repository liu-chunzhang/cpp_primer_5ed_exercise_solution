#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query_base.h"

class Query_base ;

class WordQuery : public Query_base {
    friend class Query ;                                // Queryʹ��WordQuery���캯��

    private:
        WordQuery( const string &s ) ;                    // ������ࣺWordQuery���������м̳ж����Ĵ��麯��

    private:
        string rep() const ;
        QueryResult eval( const TextQuery &tq ) const override ;

    private:
        string query_word ;                              // Ҫ���ҵĵ���
};

#endif // WORDQUERY_H
