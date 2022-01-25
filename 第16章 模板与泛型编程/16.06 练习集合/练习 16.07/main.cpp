// 本程序用于验证读者在练习16.7中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

template<typename T, size_t N>
constexpr size_t size( const T( &t )[N] ) ;

int main() {
    int a[ 10 ] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } , b[] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    cout << size( a ) << endl;
    cout << size( b ) << endl;
    return 0;
}

template<typename T, size_t N> constexpr size_t size( const T( &t )[ N ] ) {
    return N ;
}

// 由于数组大小是数组类型的一部分，通过模板参数可以获取，在constexpr模板中返回即可
