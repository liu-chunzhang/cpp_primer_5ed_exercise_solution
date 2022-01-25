#ifndef BLOB_H
#define BLOB_H

#include <initializer_list>                 // ģ�����Ա�����Ķ������⣺����ʵ�ֲ��ܶ�����Դ�ļ��У�һ��Ҫ��ͷ�ļ��У�ԭ���У�
#include <iostream>                         // 1.��Ϊģ����ĳ�Ա�����Ķ��壬��һ�ֲ������Ķ��壻
#include <memory>                           // 2.���ڱ�������֪��ģ������ľ������ͣ��޷�Ϊ���Ա�������ɴ��룻
#include <vector>                           // 3.�������ڳ�Ա�����ĵ��ô���������֪��������ɴ��룮
#include "BlobPtr.h"                        // �������ϵ�ԭ������ģ�����Դ�ļ��Ժ�ͳͳ�����ٶ��壬ֱ��д��ͷ�ļ���
using namespace std;

template <typename T> class BlobPtr ;                   // ǰ����������Blob��������Ԫ����Ҫ��
template <typename T> class Blob ;                      // ��Ϊ�����==��Ҫ��������������
template <typename T> bool operator ==( const Blob<T> &lhs , const Blob<T> &rhs ) ;

// Blob��
template <typename T> class Blob {                                    // ÿ��Blobʵ��������Ȩ����������ͬ����ʵ������BlobPtr����������
    friend class BlobPtr<T> ;
    friend bool operator == <T>( const Blob<T> &lhs , const Blob<T> &rhs ) ;

    public:
        typedef T value_type ;
        typedef typename vector<T>::size_type size_type ;

    public:
        Blob() ;
        Blob( std::initializer_list<T> ilst ) ;
        virtual ~Blob() = default ;

    public:
        size_type size() const ;                                                               // Blob��Ԫ�ص���Ŀ
        bool empty() const ;
        void push_back( const T &t ) ;                                                         // ��Ӻ�ɾ��Ԫ��
        void push_back( T &&t ) ;                                                              // �ƶ��汾
        void pop_back() ;
        T& front() ;                                                                            // Ԫ�ط���
        T& back() ;
        T& operator[]( size_type i ) ;

    private:
        shared_ptr<vector<T>> data ;

    private:
        void check( size_type i , const string &msg ) const ;                                        // �����Ϸ��Լ��ĺ���
};

// ��Ԫ����
template <typename T>
bool operator == ( const Blob<T> &lhs , const Blob<T> &rhs ) {
    return lhs.data == rhs.data ;                                                   // ֻ���ж�ָ���Ƿ���ͬ����������vector<T>�Ƿ����
}

// ���캯������������
template <typename T>
Blob<T>::Blob() : data( make_shared<vector<T>>() ) { }

template <typename T>
Blob<T>::Blob( initializer_list<T> ilst ) : data( make_shared<vector<T>>( ilst ) ) { }

// ���й����Ժ���
template <typename T>
typename Blob<T>::size_type Blob<T>::size() const {
    return data->size() ;
}

template <typename T>
bool Blob<T>::empty() const {
    return data->empty() ;
}

template <typename T>
void Blob<T>::push_back( const T &t ) {
    data->push_back( t ) ;
}

template <typename T>
void Blob<T>::push_back( T &&t ) {
    data->push_back( std::move( t ) ) ;
}

template <typename T>
void Blob<T>::pop_back() {
    check( 0 , "pop_back on empty Blob" ) ;
    data->pop_back() ;
}

template <typename T>
T& Blob<T>::front() {
    check( 0 , "front on empty Blob" ) ;
    return data->front() ;
}

template <typename T>
T& Blob<T>::back() {
    check( 0 , "back on empty Blob" ) ;
    return data->back() ;
}

template <typename T>
T& Blob<T>::operator[]( size_type i ) {
    check( i , "subscript out of range") ;                             // ���i̫��check���׳��쳣����ֹ����һ�������ڵ�Ԫ��
    return ( *data )[ i ] ;
}

// ˽�м�麯��
template <typename T>
void Blob<T>::check( size_type i , const string &msg ) const {      // ��data[i]��Ч�����׳�msg
    if( i >= data->size() )
        throw out_of_range( msg ) ;
}

#endif // BLOB_H
