#include "StrVec.h"

allocator<string> StrVec::alloc ;

StrVec::StrVec() : elements( nullptr ) , first_free( nullptr ) , cap( nullptr ) { }

StrVec::StrVec( const StrVec &s ){
    pair<string*,string*> newdata = alloc_n_copy( s.begin() , s.end() ) ;
    elements = newdata.first ;
    first_free = cap = newdata.second ;
}

StrVec &StrVec::operator = ( const StrVec &s ){
    pair<string*,string*> data = alloc_n_copy( s.begin() , s.end() ) ;
    free() ;
    elements = data.first ;
    first_free = cap = data.second ;
    return *this ;
}

StrVec::StrVec( StrVec &&s ) noexcept : elements( s.elements ) , first_free( s.first_free ) , cap( s.cap ) {
    s.elements = s.first_free = s.cap = nullptr ;
}

StrVec &StrVec::operator = ( StrVec &&s ) noexcept {
    if( this != &s ){
        free() ;
        elements = s.elements ;
        first_free = s.first_free ;
        cap = s.cap ;
        s.elements = s.first_free = s.cap = nullptr ;
    }
    cout << "using fuction StrVec &StrVec::operator = ( StrVec &&s ) noexcept" << endl;
    return *this ;
}

StrVec::~StrVec(){
    free() ;
}

void StrVec::push_back( const string &s ){
    chk_n_alloc() ;
    alloc.construct( first_free++ , s ) ;                  // ��first_freeָ���Ԫ���й���s�ĸ���
}

void StrVec::pop_back() {
    --first_free ;
    alloc.destroy( first_free ) ;
}

size_t StrVec::size() const {
    return first_free - elements ;
}

size_t StrVec::capacity() const {
    return cap - elements ;
}

string *StrVec::begin() const{
    return elements ;
}

string *StrVec::end() const {
    return first_free ;
}

void StrVec::reserve( size_t num ) {
    if( capacity() < num ){
        string *newdata = alloc.allocate( num ) , *dest = newdata , *elem = elements ;
        for( size_t i = 0 ; i != size() ; ++i )
            alloc.construct( dest++ , std::move( *elem++ ) ) ;
        free() ;
        elements = newdata ;
        first_free = dest ;
        cap = elements + num ;
    }
}

void StrVec::resize( size_t num ) {
    if( num < size() ){
        while( num != size() )
            alloc.destroy( --first_free ) ;
    }
    else
        while( num != size() )
            push_back( "" ) ;
}

void StrVec::resize( size_t num , const string &s ) {
    if( num < size() ){
        while( num != size() )
            alloc.destroy( --first_free ) ;
    }
    else
        while( num != size() )
            push_back( s ) ;
}

void StrVec::chk_n_alloc() {
    if( first_free == cap )                            // ȷ���пռ�������Ԫ�أ�����ͷ����¿ռ�
        reallocate() ;
}

pair<string*,string*> StrVec::alloc_n_copy( const string *b , const string *e ){
    string *data = alloc.allocate( e - b ) ;
    return make_pair( data , uninitialized_copy( b , e , data ) ) ;
}

void StrVec::free(){
    if( elements ){                                        // ���ܴ��ݸ�deallocateһ����ָ�룬���elementΪ0������ʲôҲ����
        for( string *p = first_free ; p != elements ; )   // �������پ�Ԫ��
            alloc.destroy( --p ) ;                         // �ǵ������������������У�����˼��ԭ��
        alloc.deallocate( elements , cap - elements ) ;
    }
}

void StrVec::reallocate() {
    size_t newcapacity = size() ? 2 * size() : 1 ;       // ���䵱ǰ��С�������ڴ�ռ䣻����StrVecΪ�գ�����Ҳ���ٷ���һ��Ԫ��
    string *first = alloc.allocate( newcapacity ) ;       // �������ڴ�
    string *last = uninitialized_copy( make_move_iterator( begin() ) , make_move_iterator( end() ) , first ) ;
    free() ;                                                // һ�������ƶ���Ԫ�ؾ��ͷž��ڴ�ռ�
    elements = first ;                                      // ����ָ��
    first_free = last ;
    cap = elements + newcapacity ;
}
