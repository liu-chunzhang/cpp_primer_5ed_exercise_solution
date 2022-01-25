#include "QueryResult.h"

// ��Ԫ����
ostream &operator << ( ostream &os , const QueryResult &result ) {
    os << result.targetword << "������" << result.linenoset->size() << "�Ρ�" << endl;
    for( const QueryResult::lineNo num : *result.linenoset )
        os << "����" << num + 1 << "�У�" << *( result.linevec->cbegin() + num ) << endl;
    return os ;
}

void limitedPrint( const QueryResult &result , size_t start , size_t termi ) {
    cout << result.targetword << "��ȫ�����ܼƳ�����" << result.linenoset->size() << "�Ρ�" << endl;
    size_t count_num = 0 ;
    for( const QueryResult::lineNo num : *result.linenoset )
        if( num + 1 >= start && num + 1 <= termi ){
            cout << "����" << num + 1 << "�У�" << *( result.linevec->cbegin() + num ) << endl;
            ++count_num ;
        }
    string linesolution = ( start == termi ? "��" + to_string( start ) + "����" : "��" + to_string( start ) + "�е���" + to_string( termi ) + "��" ) ;
    if( count_num == 0 )
        cout << linesolution << "δ��⵽" << result.targetword << "��" << endl;
    else
        cout << linesolution << "�ܹ���⵽" << result.targetword << "��" << count_num << "�Ρ�" << endl;
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
