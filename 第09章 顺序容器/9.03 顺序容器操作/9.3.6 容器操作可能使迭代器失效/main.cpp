// 本程序用于验证教材中9.3.6节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<int>::const_iterator iter = ivec.cbegin() ;
    while( iter != ivec.cend() )
        if( *iter & 1 ){
            iter = ivec.insert( iter , *iter ) ;     // 复制当前元素
            iter += 2 ;                               // 向前移动迭代器，跳过当前元素以及插入到它之前的元素。
        }
        else
            iter = ivec.erase( iter ) ;               // 删除偶数元素，无须再移动迭代器，iter已经指向了我们删除元素之后的元素
    for( const int i : ivec )                        // 进行打印，验证结果
        cout << i << " " ;
    return 0;
}
