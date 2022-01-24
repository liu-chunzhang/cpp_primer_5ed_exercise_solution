// 本程序用于验证读者在练习9.38中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec ;
    for( size_t i = 1 ; i != 6 ; ++i ){
        for( vector<int>::size_type s = ivec.size() , c = ivec.capacity() ; s <= c ; ++s )
            ivec.push_back( 1 ) ;
        cout << "空间：" << ivec.capacity() << "元素数：" << ivec.size() << endl;
    }
    return 0;
}

// 打印结果说明，当前的编译器成倍增长所需空间
