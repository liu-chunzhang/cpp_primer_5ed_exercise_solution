#include "StrBlobPtr.h"

StrBlobPtr::StrBlobPtr( StrBlob &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

string &StrBlobPtr::operator*() const {
    shared_ptr<vector<string>> p = check( curr , "dereference past end" ) ;
    return ( *p )[curr] ;
}

StrBlobPtr &StrBlobPtr::operator++ () {                                                     // ǰ׺���������ص�����Ķ��������
    check( curr , "increment past end of StrBlobPtr" ) ;                                     // ���curr�Ѿ�ָ��������β��λ�ã��������
    ++curr ;                                                                                 // �����ǿ��Ե�����
    return *this ;
}

// ˽�к���
shared_ptr<vector<string>> StrBlobPtr::check( size_t i , const string &msg ) const{
    shared_ptr<vector<string>> ret = wptr.lock() ;                                         // vector������
    if( !ret )
        throw runtime_error( "unbound StrBlobPtr" ) ;
    if( i >= ret->size() )
        throw out_of_range( msg ) ;
    return ret ;                                                                            // ����ָ��vector��shared_ptr
}
