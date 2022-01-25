// 本程序用于验证读者在练习12.26中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    allocator<string> alloc ;                       // 用allocator对象alloc分配内存，这样只分配了裸内存，但没有初始化string对象
    auto const p = alloc.allocate( 10 ) ;
    string str , *q = p ;
    ifstream in( "data.txt" ) ;
    while( in >> str && q != p + 10 )
        alloc.construct( q++ , str ) ;                // 用construct操作从读取的string进行初始化
    const size_t size1 = q - p ;
    for( size_t i = 0 ; i != size1 ; ++i )
        cout << p[i] << " " ;
    while( q != p )                                   // 这里是释放内存
        alloc.destroy( --q ) ;
    alloc.deallocate( p , 10 ) ;                      // 释放完成
    return 0;
}
