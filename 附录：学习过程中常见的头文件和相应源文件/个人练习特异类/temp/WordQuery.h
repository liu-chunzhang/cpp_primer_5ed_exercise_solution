#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query.h"

class WordQuery : public Query_base {
    friend class Query ;                                // Queryʹ��WordQuery���캯��

    private:
        WordQuery( const string& ) ;                    // ������ࣺWordQuery���������м̳ж����Ĵ��麯��
        QueryResult eval( const TextQuery& ) const ;
        string rep() const ;
        string query_word ;                              // Ҫ���ҵĵ���
};

#endif // WORDQUERY_H
