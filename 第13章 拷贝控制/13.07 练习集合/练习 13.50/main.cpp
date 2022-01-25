// 本程序用于验证读者在练习13.50中的想法，并在必要的地方予以说明
#include "String.h"
#include <vector>

int main() {
    String s1( "first1" ) , s2( "second" ) ;
    vector<String> Svec ;
    Svec.reserve( 10 ) ;
    cout << "1 " ;
    Svec.push_back( s1 ) ;
    cout << "2 " ;
    Svec.push_back( std::move( s2 ) ) ;
    cout << "3 " ;
    Svec.push_back( String( "third" ) ) ;
    cout << "4 " ;
    Svec.push_back( "fourth" ) ;
    for_each( Svec.begin() , Svec.end() , []( const String &s ) -> void { cout << s << " " ; } ) ;
    cout << endl;
    return 0;
}

// 默认初始化的vector<String>不分配空间，当push_back发现vector空间不足以容纳新元素时，分配新的空间（通常是加倍），这里将数据移动到新的空间中，然后
// 释放新空间
