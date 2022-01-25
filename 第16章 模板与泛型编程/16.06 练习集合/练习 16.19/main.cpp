// 本程序用于验证读者在练习16.19中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

template <typename Container> void print( const Container &container ) ;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    print( ivec ) ;
    return 0;
}

template <typename Container>
void print( const Container &container ) {
    size_t capacity = container.size() ;
    for( typename Container::size_type i = 0 ; i != capacity ; ++i )
        cout << container[ i ]  << " " ;                                        // 既然循环条件控制了合法性，不必再检查越界情形（即使用at）
}
