// 本程序用于验证教材中4.9节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data data , *p ;                             // 为表现明显，我特地将教材上的语句都改成了输出语句
    cout << sizeof( Sales_data ) << endl;              // 输出存储Sales_data类型的对象所占的空间大小
    cout << sizeof( data ) << endl;                    // 输出data的类型大小，即sizeof(Sales_data)
    cout << sizeof( p ) << endl;                       // 输出指针所占空间的大小
    cout << sizeof( *p ) << endl;                      // p所指类型的空间大小，即sizeof(Sales_data)
    cout << sizeof( data.revenue ) << endl;            // 输出Sales_data的revenue成员对应类型的大小
    cout << sizeof( Sales_data::revenue ) << endl;     // 另一种获取revenue大小的方式
    vector<int> ivec1( 10 ) , ivec2( 10 , 1 ) ;
    for( int i = 0 ; i != 5 ; ++i )
        ivec1.push_back( i ) ;
    cout << sizeof( ivec1 ) << " " << sizeof( ivec2 ) << endl;

    int ia[] = { 1 , 2 , 3 , 5 , 8 , 13 } ;
    constexpr size_t sz = sizeof( ia ) / sizeof( *ia ) ;    // sizeof(ia)/sizeof(*ia)返回ia的元素数量
    cout << sz << endl;

    return 0;
}
