#include "QueryResult.h"

// ��Ԫ����
ostream &operator << ( ostream &os , const QueryResult &result ) {
    os << result.targetword << "������" << result.linenoset->size() << "�Ρ�" << endl;
    for( const QueryResult::lineNo num : *result.linenoset )
        os << "����" << num + 1 << "�У�" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

// ���캯������������
QueryResult::QueryResult( string target , shared_ptr<vector<string>> p1 , shared_ptr<set<lineNo>> p2 ) : targetword( target ) , linevec( p1 ) , linenoset( p2 ) { }

// ָ���������
set<QueryResult::lineNo>::iterator QueryResult::begin() {
    return linenoset->begin() ;
}

set<QueryResult::lineNo>::const_iterator QueryResult::cbegin() const {
    return linenoset->cbegin() ;
}

set<QueryResult::lineNo>::iterator QueryResult::end() {
    return linenoset->end() ;
}

set<QueryResult::lineNo>::const_iterator QueryResult::cend() const {
    return linenoset->cend() ;
}

// �����Ժ���
shared_ptr<vector<string>> QueryResult::get_file() {
    return linevec ;
}
