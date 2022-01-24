// 本程序用于验证读者在练习9.33中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;  // 这个程序是特地留下了问题，移变验证
    vector<int>::const_iterator sta = ivec.cbegin() ;
    while( sta != ivec.cend() ){
        ++sta ;
        ivec.insert( sta , 42 ) ;
        ++sta ;
    }
    for( const int i : ivec )
        cout << i << " " ;
    return 0;
}

// 如果向vector中插入新元素，且存储空间被重新分配，则原有迭代器都会失效。因此不将insert返回的迭代器赋予sta，这会使sta失效。继续使用sta会导致程序
// 崩溃。对此程序而言，保存尾后迭代器和不向sta赋值两个错误存在其一就会使得程序崩溃。
