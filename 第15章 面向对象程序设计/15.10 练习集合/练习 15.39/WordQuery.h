#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query_base.h"

class Query_base ;

class WordQuery : public Query_base {
    friend class Query ;                                // Query使用WordQuery构造函数

    private:
        WordQuery( const string &s ) ;                    // 具体的类：WordQuery将定义所有继承而来的纯虚函数

    private:
        string rep() const ;
        QueryResult eval( const TextQuery &tq ) const override ;

    private:
        string query_word ;                              // 要查找的单词
};

#endif // WORDQUERY_H
