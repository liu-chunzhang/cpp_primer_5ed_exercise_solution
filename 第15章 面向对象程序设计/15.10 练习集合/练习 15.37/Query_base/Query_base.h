#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include "TextQuery.h"

class Query ;

class Query_base{                                                   // 这是一个抽象基类，具体的查询类型从中派生，所有成员都是private的
    friend class Query ;

    protected:
        using lineNo = TextQuery::lineNo ;                          // 用于eval函数

    protected:
        virtual ~Query_base() = default ;

    private:
        virtual string rep() const = 0 ;                           // rep表示查询的一个string
};

#endif // QUERY_BASE_H
