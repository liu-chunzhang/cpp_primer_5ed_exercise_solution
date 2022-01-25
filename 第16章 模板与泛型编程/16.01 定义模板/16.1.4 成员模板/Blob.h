#ifndef BLOB_H
#define BLOB_H

#include <initializer_list>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

template <typename T> class Blob ;                      // ��Ϊ�����==��Ҫ��������������
template <typename T> bool operator ==( const Blob<T> &lhs , const Blob<T> &rhs ) ;

// Blob��
template <typename T> class Blob {                                    // ÿ��Blobʵ��������Ȩ����������ͬ����ʵ������BlobPtr����������
    friend bool operator == <T>( const Blob<T> &lhs , const Blob<T> &rhs ) ;

    public:
        typedef T value_type ;
        typedef typename vector<T>::size_type size_type ;

    public:
        Blob() ;
        Blob( initializer_list<T> ilst ) ;
        template <typename It> Blob( It b , It e ) ;
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

template <typename T>
template <typename It>
Blob<T>::Blob( It b , It e ) : data( make_shared<vector<T>>( b , e ) ) { }

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
