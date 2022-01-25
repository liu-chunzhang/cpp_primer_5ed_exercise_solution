// 本程序用于验证读者在练习16.6中的想法，并在必要的地方予以说明
#include <iostream>
#include <iterator>
using namespace std;

template<typename T, size_t N>
T* begin( const T( &t )[N] ) ;

template<typename T, size_t N>
T* end( const T( &t )[N] ) ;

int main() {
    int arr[] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 } ;
    copy( begin( arr ) , end( arr ) , ostream_iterator<int>( cout , " " ) ) ;
    return 0;
}

template<typename T, size_t N> T* begin( const T( &t )[ N ] ) {
    return &t[ 0 ] ;
}

template<typename T, size_t N> T* end( const T( &t )[ N ] ) {
    return &t[ N ] ;
}
