#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query_base.h"

class WordQuery : public Query_base {
    friend class Query ;                                // Queryʹ��WordQuery���캯��

    private:
        WordQuery( const string &s ) ;                  // ������ࣺWordQuery���������м̳ж����Ĵ��麯��

    private:
        QueryResult eval( const TextQuery &t ) const ;
        string rep() const ;

    private:
        string query_word ;                              // Ҫ���ҵĵ���
};

#endif // WORDQUERY_H
