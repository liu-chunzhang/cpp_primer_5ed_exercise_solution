// 本程序用于验证读者在练习6.23中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

void print1( const int *p ) ;
void print2( const int *p , const int *q ) ;
void print2( const int *p , size_t sz ) ;

int main() {
    int i = 0 , j[2] = { 0 , 1 } ;
    print1( &i ) ;                                   // 由于函数需要传入指针，所以输入实参是变量i的地址
    print1( j ) ;
    print2( j , end( j ) ) ;                         // 由于数组指针本来就指向自己的首元，所以不特地用begin(j)了
    print2( j , sizeof( j )/sizeof( *j ) ) ;          // 数组没有size成员，所以需要用sizeof(j)/sizeof(*j)获取其大小
    return 0;
}

void print1( const int *p ) {                      // 当参数是常量整型指针
    cout << *p << endl;
}

void print2( const int *p , const int *q ) {      // 当参数有两个，分别是数组的首尾边界时
    while( p != q )
         cout << *p++ << " " ;
    cout << endl;
}

void print2( const int *p , size_t sz ) {         // 当参数有两个，分别是常量整型指针及数组容量
    for( size_t i = 0 ; i != sz ; ++i  )
        cout << *p++ << " " ;
    cout << endl;
}
