#include "StrBlob.h"

// 友元函数
bool operator == ( const StrBlob &strblob1 , const StrBlob &strblob2 ) {
    return strblob1.data == strblob2.data ;
}

bool operator != ( const StrBlob &strblob1 , const StrBlob &strblob2 ) {
    return !( strblob1 == strblob2 ) ;
}

// 构造函数
StrBlob::StrBlob() : data( make_shared<vector<string>>() ){  }

StrBlob::StrBlob( initializer_list<string> i1st ) : data( make_shared<vector<string>>( i1st ) ) { }

StrBlob::StrBlob( vector<string> *svec ) : data( svec ) { }

StrBlob::StrBlob( const StrBlob &strblob ) : data( strblob.data ) { }

StrBlob StrBlob::operator = ( const StrBlob &strblob ) {
    data = strblob.data ;
    return *this ;
}

// 功能性函数
StrBlob::size_type StrBlob::size() const {
    return data->size() ;
}

bool StrBlob::empty() const {
    return data->empty() ;
}

void StrBlob::push_back( const string &t ) {
    data->push_back( t ) ;
}

void StrBlob::pop_back(){
    check( 0 , "pop_back on empty StrBlob" ) ;
    data->pop_back() ;
}

string &StrBlob::front(){
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

StrBlobPtr StrBlob::begin() {
    return StrBlobPtr( *this ) ;
}

StrBlobPtr StrBlob::cbegin() const {
    return StrBlobPtr( *this ) ;
}

StrBlobPtr StrBlob::end() {
    return StrBlobPtr( *this , data->size() ) ;
}

StrBlobPtr StrBlob::cend() const {
    return StrBlobPtr( *this , data->size() ) ;
}

bool StrBlob::unique() const {
    return data.unique() ;
}

size_t StrBlob::use_count() const {
    return data.use_count() ;
}

void StrBlob::check( size_type i , const string &msg ) const{
    if( i >= data->size() )
        throw out_of_range( msg ) ;
}
