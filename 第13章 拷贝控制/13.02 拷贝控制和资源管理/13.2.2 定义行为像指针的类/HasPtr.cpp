#include "HasPtr.h"

HasPtr::HasPtr( const string &s ) : ps( new string( s ) ) , i( 0 ) , use( new size_t( 1 ) ) { }

HasPtr::HasPtr( const string &s , int j ) : ps( new string( s ) ) , i( j ) , use( new size_t( 1 ) ) { }

HasPtr::HasPtr( const HasPtr &p ) : ps( p.ps ) , i( p.i ) , use( p.use ) { ++*use ; }

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

HasPtr::~HasPtr(){                                    // ������������
    if( --*use == 0 ){                                // ������ü�����Ϊ0
        delete ps ;                                  // �ͷ�string�ڴ�
        delete use ;                                 // �ͷż������ڴ�
    }
}
