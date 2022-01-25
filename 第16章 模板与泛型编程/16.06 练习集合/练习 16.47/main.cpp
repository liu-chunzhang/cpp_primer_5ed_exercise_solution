// ������������֤��������ϰ16.47�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>

void f( int v1 , int &v2 ) ;
void g( int &&v1 , int &v2 ) ;
template <typename F,typename T1,typename T2> void flip( F f , T1 &&t1 , T2 &&t2 ) ;        // ֱ������std::forward������д��ת����flips

int main() {
    int i = 0 , j = 0 , k = 0 , l = 0 ;
    std::cout << "i = " << i << " j = " << j << " k = " << k << " l = " << l << std::endl;
    f( 42 , i ) ;                                               // f�ı���ʵ��i
    std::cout << "i = " << i << " j = " << j << " k = " << k << " l = " << l << std::endl;
    g( 1 , i ) ;
    flip( g , i , 42 ) ;                                        // ��������������ֵ���Ա�����
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
