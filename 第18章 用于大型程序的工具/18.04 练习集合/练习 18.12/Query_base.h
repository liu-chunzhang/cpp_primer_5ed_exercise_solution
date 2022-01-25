#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include "TextQuery.h"

namespace chapter15 {
    class Query ;

    class Query_base{                                                   // ����һ��������࣬����Ĳ�ѯ���ʹ������������г�Ա����private��
        friend class Query ;

        protected:
            using lineNo = chapter10::TextQuery::lineNo ;                          // ����eval����

        protected:
            virtual ~Query_base() = default ;

        private:
            virtual chapter10::QueryResult eval( const chapter10::TextQuery & ) const = 0 ;
            virtual std::string rep() const = 0 ;                           // rep��ʾ��ѯ��һ��string
    };
}

#endif // QUERY_BASE_H
