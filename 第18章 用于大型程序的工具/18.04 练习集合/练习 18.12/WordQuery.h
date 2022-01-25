#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query_base.h"

namespace chapter15 {
    class Query_base ;

    class WordQuery : public Query_base {
        friend class Query ;                                // Query使用WordQuery构造函数

        private:
            WordQuery( const std::string &s ) ;                    // 具体的类：WordQuery将定义所有继承而来的纯虚函数

        private:
            std::string rep() const ;
            chapter10::QueryResult eval( const chapter10::TextQuery &tq ) const override ;

        private:
            std::string query_word ;                              // 要查找的单词
    };
}

#endif // WORDQUERY_H
