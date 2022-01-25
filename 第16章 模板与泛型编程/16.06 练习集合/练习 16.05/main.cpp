// 本程序用于验证读者在练习16.5中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

template<typename Array> void print( const Array &arr ) ;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    print( ivec ) ;
    int arr[] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    print( arr ) ;
    return 0;
}

template<typename Array> void print( const Array &arr ) {
    for( const auto &i : arr )                               // 这地方还只能用auto，毕竟t作为数组类型本身元素类型就不知道，怎么推断i类型？
        cout << i << " " ;
    cout << endl;
}

// 如果设定的是template<typename T, unsigned N> void print( const T(&)[N] )的话，那么其实只能够处理内置数组。在内置数组有array代替的当下，这不是
// 最优解。
