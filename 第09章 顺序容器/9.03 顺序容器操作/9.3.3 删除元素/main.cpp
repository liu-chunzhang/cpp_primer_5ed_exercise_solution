// 本程序用于验证教材中9.3.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ilst = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    list<int>::iterator liter = ilst.begin() ;
    while( liter != ilst.end() )
        if( *liter & 1 )                                // 教材上是用取模运算，此处用位运算，也可达到相同效果：若元素为奇数则删除此元素
            liter = ilst.erase( liter ) ;
        else
            ++liter ;
    for( const int i : ilst )
        cout << i << " " ;

    ilst.clear() ;                                      // 删除容器中的所有元素
    ilst.erase( ilst.cbegin() , ilst.cend() ) ;        // 等价调用
    return 0;
}
