#include "HasPtr.h"
// ��Ԫ����
inline
void swap( HasPtr &lhs , HasPtr &rhs ) {
    using std::swap ;
    swap( lhs.ps , rhs.ps ) ;
    swap( lhs.i , rhs.i ) ;
}
// ���캯������������
HasPtr::HasPtr( const string &s ) : ps( new string( s ) ) , i( 0 ) , use( new size_t( 1 ) ) { }

HasPtr::HasPtr( const string &s , int j ) : ps( new string( s ) ) , i( j ) , use( new size_t( 1 ) ) { }

HasPtr::HasPtr( const HasPtr &p ) : ps( p.ps ) , i( p.i ) , use( p.use ) { ++*use ; }

HasPtr &HasPtr::operator = ( const string &s ) {
    *ps = s ;
    return *this ;
}

HasPtr &HasPtr::operator = ( const HasPtr &p ){
    ++*p.use ;                                        // �����Ҳ������������ü���
    if( --*use == 0 ){                                // Ȼ��ݼ�����������ü���
        delete ps ;                                   // ���û�������û�
        delete use ;                                  // �ͷű��������ĳ�Ա
    }
    ps = p.ps ;                                       // �����ݴ�p������������
    i = p.i ;
    use = p.use ;
    return *this ;                                   // ���ر�����
}

HasPtr &HasPtr::operator = ( HasPtr h ) {
    swap( *this , h ) ;
    return *this ;
}

HasPtr::~HasPtr(){                                    // ������������
    if( --*use == 0 ){                                // ������ü�����Ϊ0
        delete ps ;                                  // �ͷ�string�ڴ�
        delete use ;                                 // �ͷż������ڴ�
    }
}

// �����Ժ���
const string &HasPtr::operator * () const {
    return *ps ;
}
