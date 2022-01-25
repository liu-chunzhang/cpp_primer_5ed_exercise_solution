#include "HasPtr.h"
// ���캯������������
HasPtr::HasPtr( const string &s , int j ) : ps( new string( s ) ) , i( j ) , use( new size_t( 1 ) ) { }

HasPtr::HasPtr( const string &s ) : HasPtr( s , 0 ) { }

HasPtr &HasPtr::operator = ( const string &s ) {
    *ps = s ;
    return *this ;
}

HasPtr::HasPtr( const HasPtr &p ) : ps( p.ps ) , i( p.i ) , use( p.use ) {
    ++*use ;
}

HasPtr &HasPtr::operator = ( const HasPtr &rhs ){
    ++*rhs.use ;                                        // �����Ҳ������������ü���
    if( --*use == 0 ){                                // Ȼ��ݼ�����������ü���
        delete ps ;                                   // ���û�������û�
        delete use ;                                  // �ͷű��������ĳ�Ա
    }
    ps = rhs.ps ;                                       // �����ݴ�p������������
    i = rhs.i ;
    use = rhs.use ;
    return *this ;                                   // ���ر�����
}

HasPtr::~HasPtr(){                                    // ������������
    if( --*use == 0 ){                                // ������ü�����Ϊ0
        delete ps ;                                  // �ͷ�string�ڴ�
        delete use ;                                 // �ͷż������ڴ�
    }
}

// �����Ժ���
string& HasPtr::operator * () const{
    return *ps ;
}


