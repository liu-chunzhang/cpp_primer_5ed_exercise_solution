// 本程序用于验证读者在练习3.19中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;                                         // 前三种在于初始化，后二种在于改造vector

int main() {
    vector<int> vint1( 10 , 42 ) ;                            // 第一种，直接初始化
    cout << "v1:" ;
    for( auto i : vint1 )
        cout << i << " " ;
    cout << endl;

    vector<int> vint2{ 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 } ;   // 第二种，列表初始化
    cout << "v2:" ;
    for( auto i : vint2 )
        cout << i << " " ;
    cout << endl;

    vector<int> vint3 = { 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 } ; // 第三种，直接初始化
    cout << "v3:" ;
    for( auto i : vint3 )
        cout << i << " " ;
    cout << endl;

    vector<int> vint4;                                        // 第四种，向未定义大小的vector里压入内容
    for( int i = 0 ; i != 10 ; ++i )
        vint4.push_back( 42 ) ;
    cout << "v4:" ;
    for( auto i : vint4 )
        cout << i << " " ;
    cout << endl;

    vector<int> vint5( 10 ) ;                                  // 第五种，向已定义大小的vector里压入内容
    for( auto &i : vint5 )
        i = 42;
    cout << "v5:" ;
    for( auto i : vint5 )
        cout << i << " " ;
    cout << endl;

    return 0;
}
