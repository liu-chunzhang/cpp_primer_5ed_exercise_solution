#ifndef STRBLOB_H                                                        // �����°汾��Ȼ�ܴ�̶��ϰ����Դ���룬���Ͳο��𰸺ܲ�һ����
#define STRBLOB_H                                                        // 1.��Ҫ����StrBlobPtr����ӡѭ�����±�ִ�У������Ϸ��ԣ���
                                                                         // 2.ɾ����һЩ�Ա���û�õĸ�������
#include <iostream>
#include <vector>
#include <memory>
#include "StrBlobPtr.h"
using namespace std;

class StrBlobPtr ;

class StrBlob{
    friend class StrBlobPtr ;

    public:
        typedef vector<string>::size_type size_type ;

    public:
        StrBlob() ;
        StrBlob( initializer_list<string> ilst ) ;
        StrBlob( vector<string> *svec ) ;
        StrBlob( const StrBlob &strblob ) ;                                      // �������캯��
        StrBlob& operator = ( const StrBlob &strblob ) ;                        // ������ֵ�����
        ~StrBlob() = default ;

    public:
        size_type size() const ;
        bool empty() const ;
        void push_back( const string &t ) ;
        void pop_back() ;
        string &front() ;
        const string &front() const ;
        string &back() ;
        const string &back() const ;
        string &print( size_t u ) ;

    public:
        StrBlobPtr begin() ;
        StrBlobPtr cbegin() const ;
        StrBlobPtr end() ;
        StrBlobPtr cend() const ;

    private:
        shared_ptr<vector<string>> data ;
        void check( size_type i , const string &msg ) const ;
};

#endif // STRBLOB_H
