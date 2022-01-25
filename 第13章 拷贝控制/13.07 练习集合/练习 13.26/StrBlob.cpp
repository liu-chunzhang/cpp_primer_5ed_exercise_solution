#include "StrBlob.h"
// ���캯������������
StrBlob::StrBlob() : data( make_shared<vector<string>>() ){  }

StrBlob::StrBlob( initializer_list<string> i1st ) : data( make_shared<vector<string>>( i1st ) ) { }

StrBlob::StrBlob( vector<string> *svec ) : data( svec ) { }

StrBlob::StrBlob( const StrBlob &strBlob ) : data( new vector<string>( *strBlob.data ) ) { }    // �¿����ڴ棬���ݿ�����ȥ��������ַ����ָ��

StrBlob &StrBlob::operator = ( const StrBlob &strBlob ){                                     // ͬ�ϡ�����������shared_ptr��������ָ�����͹�
    data = make_shared<vector<string>>( *strBlob.data ) ;                                   // ��̬�������ֱ�ӽ��´�����shared_ptr����
    return *this ;                                                                      // dataҲ���ᵼ���Ը�ֵ���󣨼��Ը�ֵҲ�������
}                                                                                        // �Ƿ�ָ�����⣩��

StrBlob::size_type StrBlob::size() const {
    return data->size() ;
}

bool StrBlob::empty() const {
    return data->empty() ;
}

void StrBlob::push_back( const string &t ) {
    data->push_back( t ) ;
}

void StrBlob::pop_back() {
    check( 0 , "pop_back on empty StrBlob" ) ;
    data->pop_back() ;
}

string &StrBlob::front(){                                                               // ���vectorΪ�գ���check�׳�һ���쳣
    check( 0 , "front on empty StrBlob" ) ;
    return data->front() ;
}

const string &StrBlob::front() const {
    check( 0 , "front on empty StrBlob" ) ;
    return data->front() ;
}

string &StrBlob::back(){
    check( 0 , "back on empty StrBlob" ) ;
    return data->back() ;
}

const string &StrBlob::back() const {
    check( 0 , "back on empty StrBlob" ) ;
    return data->back() ;
}

string &StrBlob::print( size_t u ){
    check( u , "back on empty StrBlob" ) ;
    return ( *data )[u] ;
}

void StrBlob::check( size_type i , const string &msg ) const{
    if( i >= data->size() )
        throw out_of_range( msg ) ;
}
