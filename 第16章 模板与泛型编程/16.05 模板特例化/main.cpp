// 本程序用于验证教材中16.5节内容的可靠性，并提供感性认知
#include <cstring>
#include <unordered_set>
#include "Foo.h"
#include "Sales_data.h"

template <typename T> int compare( const T &t1 , const T &t2 ) ;
template <> int compare( const char* const &c1 , const char* const &c2 ) ;

int main() {
    const char *p1 = "hi" , *p2 = "mom" ;
    compare( p1 , p2 ) ;

    unordered_multiset<Sales_data> SDset ;

    int i ;
    remove_reference<decltype(42)>::type a = 1 ;
    remove_reference<decltype(i)>::type b = 2 ;
    remove_reference<decltype(std::move(i))>::type c = 3 ;      // a,b,c均为int类型

    Foo<string> fs ;
    fs.Bar() ;
    Foo<int> fi ;
    fi.Bar() ;
    return 0;
}

template <typename T> int compare( const T &t1 , const T &t2 ) {
    cout << "Using function template <typename T> int compare( const T &t1 , const T &t2 )" << endl;
    if( t1 < t2 )
        return -1 ;
    if( t1 > t2 )
        return 1 ;
    return 0 ;
}

template <> int compare( const char* const &c1 , const char* const &c2 )  {
    cout << "Using function template <> int compare( const char* const &c1 , const char* const &c2 )" << endl;
    return strcmp( c1 , c2 ) ;
}
