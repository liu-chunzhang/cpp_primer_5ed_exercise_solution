#include "StrBlob.h"
// 构造函数与析构函数
StrBlob::StrBlob() : data( make_shared<vector<string>>() ){  }

StrBlob::StrBlob( initializer_list<string> i1st ) : data( make_shared<vector<string>>( i1st ) ) { }

StrBlob::StrBlob( vector<string> *svec ) : data( svec ) { }

StrBlob::StrBlob( const StrBlob &strBlob ) : data( new vector<string>( *strBlob.data ) ) { }    // 新开辟内存，数据拷贝进去，并将地址给新指针

StrBlob &StrBlob::operator = ( const StrBlob &strBlob ){                                     // 同上。此外由于用shared_ptr而非内置指针类型管
    data = make_shared<vector<string>>( *strBlob.data ) ;                                   // 理动态对象，因此直接将新创建的shared_ptr赋予
    return *this ;                                                                      // data也不会导致自赋值错误（即自赋值也不会出现
}                                                                                        // 非法指针问题）。

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

string &StrBlob::front(){                                                               // 如果vector为空，则check抛出一个异常
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
