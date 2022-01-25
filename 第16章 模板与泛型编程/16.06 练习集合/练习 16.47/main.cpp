// 本程序用于验证读者在练习16.47中的想法，并在必要的地方予以说明
#include <iostream>

void f( int v1 , int &v2 ) ;
void g( int &&v1 , int &v2 ) ;
template <typename F,typename T1,typename T2> void flip( F f , T1 &&t1 , T2 &&t2 ) ;        // 直接利用std::forward机制来写翻转函数flips

int main() {
    int i = 0 , j = 0 , k = 0 , l = 0 ;
    std::cout << "i = " << i << " j = " << j << " k = " << k << " l = " << l << std::endl;
    f( 42 , i ) ;                                               // f改变其实参i
    std::cout << "i = " << i << " j = " << j << " k = " << k << " l = " << l << std::endl;
    g( 1 , i ) ;
    flip( g , i , 42 ) ;                                        // 第三个参数的右值属性被保留
    std::cout << "i = " << i << " j = " << j << " k = " << k << " l = " << l << std::endl;
    return 0;
}

void f( int v1 , int &v2 ) {
    std::cout << "void f( int v1 , int &v2 ) :" << v1 << " " << ++v2 << std::endl;
}

void g( int &&v1 , int &v2 ) {
    std::cout << "void g( int &&v1 , int &v2 ) :" << v1 << " " << ++v2 << std::endl;
}

template <typename F,typename T1,typename T2> void flip( F f , T1 &&t1 , T2 &&t2 ) {
    f( std::forward<T2>( t2 ) , std::forward<T1>( t1 ) ) ;
}
