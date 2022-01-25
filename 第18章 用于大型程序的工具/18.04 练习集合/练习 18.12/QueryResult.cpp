#include "QueryResult.h"

namespace chapter10 {
// ��Ԫ����
    std::ostream &operator << ( std::ostream &os , const QueryResult &result ) {
        os << result.targetword << "������" << result.linenoset->size() << "�Ρ�" << std::endl;
        for( const QueryResult::lineNo num : *result.linenoset )
            os << "����" << num + 1 << "�У�" << *( result.linevec->cbegin() + num ) << std::endl;
        return os ;
    }

// ���캯������������
    QueryResult::QueryResult( std::string target , std::shared_ptr<std::vector<std::string>> p1 , std::shared_ptr<std::set<lineNo>> p2 ) : targetword( target ) , linevec( p1 ) , linenoset( p2 ) { }

// ָ���������
    std::set<QueryResult::lineNo>::iterator QueryResult::begin() {
        return linenoset->begin() ;
    }

    std::set<QueryResult::lineNo>::const_iterator QueryResult::cbegin() const {
        return linenoset->cbegin() ;
    }

    std::set<QueryResult::lineNo>::iterator QueryResult::end() {
        return linenoset->end() ;
    }

    std::set<QueryResult::lineNo>::const_iterator QueryResult::cend() const {
        return linenoset->cend() ;
    }

// �����Ժ���
    std::shared_ptr<std::vector<std::string>> QueryResult::get_file() {
        return linevec ;
    }
}
