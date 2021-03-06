#include "HasPtr.h"
// 友元函数
inline
void swap( HasPtr &lhs , HasPtr &rhs ) {
    using std::swap ;
    swap( lhs.ps , rhs.ps ) ;
    swap( lhs.i , rhs.i ) ;
}
// 构造函数与析构函数
HasPtr::HasPtr( const string &s ) : ps( new string( s ) ) , i( 0 ) , use( new size_t( 1 ) ) { }

HasPtr::HasPtr( const string &s , int j ) : ps( new string( s ) ) , i( j ) , use( new size_t( 1 ) ) { }

HasPtr::HasPtr( const HasPtr &p ) : ps( p.ps ) , i( p.i ) , use( p.use ) { ++*use ; }

HasPtr &HasPtr::operator = ( const string &s ) {
    *ps = s ;
    return *this ;
}

HasPtr &HasPtr::operator = ( const HasPtr &p ){
    ++*p.use ;                                        // 递增右侧运算对象的引用计数
    if( --*use == 0 ){                                // 然后递减本对象的引用计数
        delete ps ;                                   // 如果没有其他用户
        delete use ;                                  // 释放本对象分配的成员
    }
    ps = p.ps ;                                       // 将数据从p拷贝到本对象
    i = p.i ;
    use = p.use ;
    return *this ;                                   // 返回本对象
}

HasPtr &HasPtr::operator = ( HasPtr h ) {
    swap( *this , h ) ;
    return *this ;
}

HasPtr::~HasPtr(){                                    // 析构函数定义
    if( --*use == 0 ){                                // 如果引用计数变为0
        delete ps ;                                  // 释放string内存
        delete use ;                                 // 释放计数器内存
    }
}

// 功能性函数
const string &HasPtr::operator * () const {
    return *ps ;
}
