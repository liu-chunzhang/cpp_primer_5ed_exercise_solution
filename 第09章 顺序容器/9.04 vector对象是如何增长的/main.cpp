// 本程序用于验证教材中9.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;    // 此标准库分配2^min的空间，此数为大于当前空间的2的
    for( vector<int>::size_type ix = 0 ; ix != 24 ; ++ix )                               // 整数次幂中最小的
        ivec.push_back( ix ) ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;

    ivec.reserve( 30 ) ;                                                                   // 若reserve大于标准库分配的capacity，则按照其要求分
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;    // 配空间，否则按照capacity分配
    ivec.reserve( 50 ) ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;

    while( ivec.size() != ivec.capacity() )                                               // 添加元素用光了预留空间
        ivec.push_back( 0 ) ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;
    ivec.push_back( 42 ) ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;    // 这表明vector的实现策略似乎是再每次需要分配新内存
                                                                                           // 空间上将当前容量翻倍。
    ivec.shrink_to_fit() ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;    // 当前标准库确实退换内存了
    return 0;
}
