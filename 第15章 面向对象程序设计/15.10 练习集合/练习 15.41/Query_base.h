#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include "TextQuery.h"

class Query_base{                                                   // ����һ��������࣬����Ĳ�ѯ���ʹ������������г�Ա����private��
    friend class Query ;

    protected:
        using lineNo = TextQuery::lineNo ;                          // ����eval����

    protected:
        virtual ~Query_base() = default ;

    private:
        virtual QueryResult eval( const TextQuery & ) const = 0 ;
        virtual string rep() const = 0 ;                           // rep��ʾ��ѯ��һ��string
};

#endif // QUERY_BASE_H
