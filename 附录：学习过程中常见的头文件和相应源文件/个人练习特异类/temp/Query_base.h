#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include "Query.h"
#include "TextQuery.h"

class Query ;

class Query_base{                                                   // ����һ��������࣬����Ĳ�ѯ���ʹ������������г�Ա����private��
    friend class Query ;

    protected:
        using line_no = TextQuery::line_no ;                        // ����eval����
        virtual ~Query_base() = default ;

    private:
        virtual QueryResult eval( const TextQuery& ) const = 0 ;   // eval�������ڷ����뵱ǰQuery��ƥ���QueryResult
        virtual string rep() const = 0 ;                           // rep��ʾ��ѯ��һ��string
};

#endif // QUERY_BASE_H
