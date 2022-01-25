#include "StrBlob.h"
// ���캯��
StrBlob::StrBlob() : data( make_shared<vector<string>>() ){  }

StrBlob::StrBlob( initializer_list<string> i1 ) : data( make_shared<vector<string>>( i1 ) ) { }

// �����Ժ���
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

string &StrBlob::front(){                                                         // ���vectorΪ�գ���check�׳�һ���쳣
    check( 0 , "front on empty StrBlob" ) ;
    return data->front() ;
}

string &StrBlob::back(){
    check( 0 , "back on empty StrBlob" ) ;
    return data->back() ;
}

void StrBlob::check( size_type i , const string &msg ) const{
    if( i >= data->size() )
        throw out_of_range( msg ) ;
}
