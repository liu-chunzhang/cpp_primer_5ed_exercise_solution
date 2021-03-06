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

StrVec::StrVec( StrVec &&Svec ) noexcept : elements( Svec.elements ) , first_free( Svec.first_free ) , cap( Svec.cap ) {
    Svec.elements = Svec.first_free = Svec.cap = nullptr ;
}

StrVec &StrVec::operator = ( StrVec &&Svec ) noexcept {
    if( this != &Svec ){
        free() ;
        elements = Svec.elements ;
        first_free = Svec.first_free ;
        cap = Svec.cap ;
        Svec.elements = Svec.first_free = Svec.cap = nullptr ;
    }
    return *this ;
}

StrVec::~StrVec(){
    free() ;
}

void StrVec::push_back( const string &s ){
    chk_n_alloc() ;
    alloc.construct( first_free++ , s ) ;                  // 在first_free指向的元素中构造s的副本
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
    if( first_free == cap )                            // 确保有空间容纳新元素，否则就分配新空间
        reallocate() ;
}

pair<string*,string*> StrVec::alloc_n_copy( const string *b , const string *e ){
    string *data = alloc.allocate( e - b ) ;
    return make_pair( data , uninitialized_copy( b , e , data ) ) ;
}

void StrVec::free(){
    if( elements ){                                        // 不能传递给deallocate一个空指针，如果element为0，则函数什么也不做
        for( string *p = first_free ; p != elements ; )   // 逆序销毁旧元素
            alloc.destroy( --p ) ;                         // 非得在这里填入条件不行，可以思考原因
        alloc.deallocate( elements , cap - elements ) ;
    }
}

void StrVec::reallocate() {
    size_t newcapacity = size() ? 2 * size() : 1 ;       // 分配当前大小两倍的内存空间；就算StrVec为空，我们也至少分配一个元素
    string *newdata = alloc.allocate( newcapacity ) ;     // 分配新内存
    string *dest = newdata ;                              // 指向新数组中下一个空闲位置
    string *elem = elements ;                             // 指向旧数组中的下一个元素
    for( size_t i = 0 ; i != size() ; ++i )
        alloc.construct( dest++ , std::move( *elem++ ) ) ; // 同进构造完新体系的所有元素
    free() ;                                              // 一旦我们移动完元素就释放旧内存空间
    elements = newdata ;                                  // 更新指针
    first_free = dest ;
    cap = elements + newcapacity ;
}
