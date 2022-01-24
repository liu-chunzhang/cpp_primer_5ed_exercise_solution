// 本程序用于验证教材中10.2.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <iterator>
#include <array>
using namespace std;

int main() {
    vector<int> ivec( 10 ,42 ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , "\t" ) ) ; cout << endl;
    fill( ivec.begin() , ivec.end() , 18 ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , "\t" ) ) ; cout << endl;
    fill( ivec.begin() , ivec.begin() + ivec.size() / 2 , 14 ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , "\t" ) ) ; cout << endl;
    fill_n( ivec.begin() , ivec.size() , 0 ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , "\t" ) ) ; cout << endl;

    ivec.clear() ;
    back_insert_iterator<vector<int>> baciter = back_inserter( ivec ) ;      // 此处auto代表的是这个类型
    *baciter = 42 ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , "\t" ) ) ; cout << endl;

    fill_n( baciter , 10 , 20 ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , "\t" ) ) ; cout << endl;

    int a1[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    int a2[ sizeof( a1 ) / sizeof ( *a1 ) ] ;
    array<int,10> a3 = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    copy( begin( a1 ) , end( a1 ) , a2 ) ;
    copy( a3.cbegin() , a3.cend() , a2 ) ;
    copy( begin( a2 ) , end( a2 ) , ostream_iterator<int>( cout , "\t" ) ) ; cout << endl;
    copy( a3.cbegin() , a3.cend() , ostream_iterator<int>( cout , "\t" ) ) ; cout << endl;
    return 0;
}
