// 本程序用于验证读者在练习9.31中的想法，并在必要的地方予以说明：说明并适当修改程序，使之适用于forward_list结构
#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> ivec = { 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;        // 相比于list版本。需要同时维护前驱和后继两个迭代器
    forward_list<int>::const_iterator pre = ivec.before_begin() , curr = ivec.cbegin() ;
    while( curr != ivec.cend() )
        if( *curr & 1 ){
            curr = ivec.insert_after( curr , *curr ) ;      // 插入到当前元素之后，insert_after返回的是最后一个插入元素的迭代器
            pre = curr++ ;                                  // forward_list需要同时维护前驱和后继两个迭代器，所以这一步的书写也略有不同。
        }
        else
            curr = ivec.erase_after( pre ) ;
    for( const int i : ivec )
        cout << i << "\t" ;
    return 0;
}
