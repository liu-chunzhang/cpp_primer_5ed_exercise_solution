#include "NotQuery.h"

// ��Ԫ����
Query operator ~ ( const Query &q ) {
    return shared_ptr<Query_base>( new NotQuery( q ) ) ;
}

// ˽�й��캯��
NotQuery::NotQuery( const Query &q ) : query( q ) { }

// ˽�й����Ժ���
string NotQuery::rep() const {
    return "~(" + query.rep() + ")" ;
}

QueryResult NotQuery::eval( const TextQuery &t ) const {                    // �����������Ľ��set�в����ڵ���
    QueryResult result = query.eval( t ) ;                                   // ͨ��Query��������eval���������
    shared_ptr<set<line_no>> ret_lines = make_shared<set<line_no>>() ;    // ��ʼʱsetΪ��
    set<line_no>::iterator beg = result.begin() , ter = result.end() ;     // ���������������ֵ��������н��е���
    size_t sz = result.get_file()->size() ;                                 // ���������ļ���ÿһ�У������в���result�У�������ӵ�ret_lines��
    for( size_t n = 0 ; n != sz ; ++n )                                     // �������û�д�����result��������
        if( beg == ter || *beg != n )                                        // ��鵱ǰ���Ƿ����
            ret_lines->insert( n ) ;                                         // ������result�У��������һ��
        else if( beg != ter )
            ++beg ;                                                          // ���������ȡresult����һ�У�����еĻ���
    return QueryResult( rep() , ret_lines , result.get_file() ) ;
}
