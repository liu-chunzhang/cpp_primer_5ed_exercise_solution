#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query_base.h"

class WordQuery : public Query_base {
    friend class Query ;                                // Query使用WordQuery构造函数

    private:
        WordQuery( const string &s ) ;                  // 具体的类：WordQuery将定义所有继承而来的纯虚函数

    private:
        QueryResult eval( const TextQuery &t ) const ;
        string rep() const ;

    private:
        string query_word ;                              // 要查找的单词
};

#endif // WORDQUERY_H
