#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query.h"

class WordQuery : public Query_base {
    friend class Query ;                                // Query使用WordQuery构造函数

    private:
        WordQuery( const string& ) ;                    // 具体的类：WordQuery将定义所有继承而来的纯虚函数
        QueryResult eval( const TextQuery& ) const ;
        string rep() const ;
        string query_word ;                              // 要查找的单词
};

#endif // WORDQUERY_H
