#include "StrBlob.h"
// 构造函数
StrBlob::StrBlob() : data( make_shared<vector<string>>() ){  }

StrBlob::StrBlob( initializer_list<string> i1 ) : data( make_shared<vector<string>>( i1 ) ) { }

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

bool StrBlob::unique() const {
    return data.unique() ;
}

size_t StrBlob::use_count() const {
    return data.use_count() ;
}

void StrBlob::check( size_type i , const string& msg ) const{
    if( i >= data->size() )
        throw out_of_range( msg ) ;
}
