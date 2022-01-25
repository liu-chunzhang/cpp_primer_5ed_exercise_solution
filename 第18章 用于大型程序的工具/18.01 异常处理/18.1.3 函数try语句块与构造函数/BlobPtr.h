#ifndef BLOBPTR_H
#define BLOBPTR_H

#include "Blob.h"
using namespace std;

template <typename T> class Blob ;

template <typename T> class BlobPtr {
    public:
        BlobPtr() ;
        BlobPtr( Blob<T> &a , size_t sz = 0 ) ;

    public:
        T& operator *() const ;
        BlobPtr& operator++() ;                                                    // ǰ�������������������BlobPtr<T>&��Ч��
        BlobPtr& operator--() ;                                                    // ǰ�������������������BlobPtr<T>&��Ч��
        BlobPtr operator++( int ) ;                                                // ���������������һ��ָ�룬��������ǰ�������������
        BlobPtr operator--( int ) ;                                                // ���������������һ��ָ�룬��������ǰ�������������

    private:
        weak_ptr<vector<T>> wptr ;                                                // ����һ��weak_ptr����ʾ�ײ�vector���ܱ�����
        size_t curr ;                                                              // �����еĵ�ǰλ��

    private:
        shared_ptr<vector<T>> check( size_t i , const string &msg ) const ;     // �����ɹ���check����һ��ָ��vector��shared_ptr
};

// BlobPtr<T>�ຯ������
// ���캯������������
template <typename T>
BlobPtr<T>::BlobPtr() : curr( 0 ) { }

template <typename T>
BlobPtr<T>::BlobPtr( Blob<T> &a , size_t sz ) : wptr( a.data ) , curr( sz ) { }

// �����Ժ���
template <typename T>
T& BlobPtr<T>::operator *() const {
    shared_ptr<vector<T>> t = check( curr , "dereference past end" ) ;
    return ( *t )[ curr ] ;                                                         // ( *t )Ϊ������ָ���vector
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator ++() {
    check( curr , "increment past end of BlobPtr" ) ;
    ++curr ;
    return *this ;
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator --() {
    --curr ;
    check( -1 , "decrement past end of BlobPtr" ) ;
    return *this ;
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator++( int ) {         // �˴������飬����ǰ�õ����Ի���м�顣��ͬ
    BlobPtr ret = *this ;                           // ���浱ǰֵ
    ++*this ;                                       // �ƽ�һ��Ԫ�أ�ǰ��++�������Ƿ�Ϸ�
    return ret ;                                    // ���ر����״̬
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator--( int ) {
    BlobPtr ret = *this ;
    --*this ;
    return ret ;
}

template <typename T>
shared_ptr<vector<T>> BlobPtr<T>::check( size_t i , const string &msg ) const {
	shared_ptr<vector<T>> ret = wptr.lock();
	if( !ret )
		throw runtime_error( "unbound BlobPtr" ) ;
	if( i >= ret->size() )
		throw out_of_range( msg ) ;
	return ret ;
}

#endif // BLOBPTR_H
