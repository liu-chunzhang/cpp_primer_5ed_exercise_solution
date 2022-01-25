#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include "Query.h"
#include "TextQuery.h"

class Query ;

class Query_base{                                                   // 这是一个抽象基类，具体的查询类型从中派生，所有成员都是private的
    friend class Query ;

    protected:
        using line_no = TextQuery::line_no ;                        // 用于eval函数
        virtual ~Query_base() = default ;

    private:
        virtual QueryResult eval( const TextQuery& ) const = 0 ;   // eval函数用于返回与当前Query相匹配的QueryResult
        virtual string rep() const = 0 ;                           // rep表示查询的一个string
};

#endif // QUERY_BASE_H
