#include "StrVec.h"

void* operator new( size_t cnt ){
    if( void *mem = malloc( cnt ) )
        return mem ;
    else
        throw bad_alloc() ;
}

void* operator new[]( size_t cnt ){
    if( void *mem = malloc( cnt ) )
        return mem ;
    else
        throw bad_alloc() ;
}

void operator delete( void *mem ) noexcept {
    free( mem ) ;
}

void operator delete[]( void *mem ) noexcept {
    free( mem ) ;
}

allocator<string> StrVec::alloc ;

StrVec::StrVec() : elements( nullptr ) , first_free( nullptr ) , cap( nullptr ) { }

StrVec::StrVec( initializer_list<string> slst ) {
    pair<string*,string*> newdata = alloc_n_copy( slst.begin() , slst.end() ) ;
    elements = newdata.first ;
    first_free = cap = newdata.second ;
}

StrVec& StrVec::operator = ( initializer_list<string> slst ) {
    pair<string*,string*> newdata = alloc_n_copy( slst.begin() , slst.end() ) ;
    free() ;
    elements = newdata.first ;
    first_free = cap = newdata.second ;
    return *this ;
}

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

StrVec::~StrVec(){
    free() ;
}

void StrVec::push_back( const string &s ){
    chk_n_alloc() ;
    alloc.construct( first_free++ , s ) ;                  // ��first_freeָ���Ԫ���й���s�ĸ���
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

void StrVec::chk_n_alloc() {
    if( size() == capacity() )                            // ȷ���пռ�������Ԫ�أ�����ͷ����¿ռ�
        reallocate() ;
}

pair<string*,string*> StrVec::alloc_n_copy( const string *b , const string *e ){
    string *data = static_cast<string*>( operator new ( ( e - b ) * sizeof( string ) ) ) ;  // ����ռ䱣�������Χ�е�Ԫ��
    return { data , uninitialized_copy( b , e , data ) } ;                         // ��ʼ��������һ��pair����pair��data��uninitialzed_
}                                                                                    // copy�ķ���ֵ����

void StrVec::free(){
    if( elements ){                                        // ���ܴ��ݸ�deallocateһ����ָ�룬���elementΪ0������ʲôҲ����
        for( string *p = first_free ; p != elements ; )   // �������پ�Ԫ��
            alloc.destroy( --p ) ;                         // �ǵ������������������У�����˼��ԭ��
        operator delete[]( elements ) ;
    }
}

void StrVec::reallocate() {
    size_t newcapacity = size() ? 2 * size() : 1 ;       // ���䵱ǰ��С�������ڴ�ռ䣻����StrVecΪ�գ�����Ҳ���ٷ���һ��Ԫ��
    string *newdata = static_cast<string*>( operator new[]( newcapacity * sizeof( string ) ) ) ;     // �������ڴ�
    string *dest = newdata ;                              // ָ������������һ������λ��
    string *elem = elements ;                             // ָ��������е���һ��Ԫ��
    for( size_t i = 0 ; i != size() ; ++i )
        alloc.construct( dest++ , std::move( *elem++ ) ) ; // ͬ������������ϵ������Ԫ��
    free() ;                                              // һ�������ƶ���Ԫ�ؾ��ͷž��ڴ�ռ�
    elements = newdata ;                                  // ����ָ��
    first_free = dest ;
    cap = elements + newcapacity ;
}
