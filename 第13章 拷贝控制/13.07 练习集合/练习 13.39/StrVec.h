#ifndef STRVEC_H
#define STRVEC_H

#include <iostream>
#include <memory>
using namespace std;

class StrVec{
    public:
        StrVec() ;                                                                        // allocator��Ա����Ĭ�ϳ�ʼ��
        StrVec( const StrVec &s ) ;                                                       // �������캯��
        StrVec &operator = ( const StrVec &s ) ;                                         // ������ֵ�����
        ~StrVec();                                                                        // ��������

    public:
        void push_back( const string &s ) ;
        void pop_back() ;
        size_t size() const ;                                                            // ����������ʹ�õ�Ԫ����Ŀ
        size_t capacity() const ;                                                        // ���ؿ��Ա����Ԫ������
        void reserve( size_t num ) ;
        void resize( size_t num ) ;
        void resize( size_t num , const string &s ) ;

    public:
        string *begin() const ;
        string *end() const ;

    private:
        string *elements ;                                                               // ָ��������Ԫ��ָ��
        string *first_free ;                                                             // ָ�������һ������Ԫ�ص�ָ��
        string *cap ;                                                                    // ָ������β��λ�õ�ָ��
        static allocator<string> alloc ;                                               // ����Ԫ��

    private:
        void chk_n_alloc() ;                                                              // ���ߺ��������������캯������ֵ�������������
        pair<string*,string*> alloc_n_copy( const string *b , const string *e ) ;     // ��ʹ��
        void free() ;                                                                    // ����Ԫ�ز��ͷ��ڴ�
        void reallocate() ;                                                              // ��ø����ڴ沢��������Ԫ��
};

#endif // STRVEC_H
