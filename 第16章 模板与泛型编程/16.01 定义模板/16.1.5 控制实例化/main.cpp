// 本程序用于验证教材中16.1.5节内容的可靠性，并提供感性认知
#include "Blob.h"

template <typename T=int> int compare( const T &lhs , const T &rhs ) ;

int main() {
    Blob<string> sa1 , sa2 ;
    Blob<int> a1 = { 0 , 1 , 2 , 3 , 4 , 5 , 6  , 7 , 8 , 9 } ;
    Blob<int> a2( a1 ) ;
    int i = compare( a1[0] , a2[0] ) ;
    cout << i << endl;
    return 0;
}

template <typename T = int> int compare( const T &lhs , const T &rhs ) {
    if( less<T>()( lhs , rhs ) )
        return 1 ;
    if( less<T>()( rhs , lhs ) )
        return -1 ;
    return 0 ;
}
