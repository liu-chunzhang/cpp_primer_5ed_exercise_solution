// 本程序用于验证读者在练习9.31中的想法，并在必要的地方予以说明：说明并适当修改程序，使之适用于list结构
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    list<int>::const_iterator iter = ivec.cbegin() ;
    while( iter != ivec.cend() )
        if( *iter & 1 ){
            iter = ivec.insert( iter , *iter ) ;
            ++++iter ;                                                    // 只有迭代器的多递增运算list没有定义，剩下的几乎不变
        }
        else
            iter = ivec.erase( iter ) ;
    for( const int i : ivec )
        cout << i << " " ;
    return 0;
}
