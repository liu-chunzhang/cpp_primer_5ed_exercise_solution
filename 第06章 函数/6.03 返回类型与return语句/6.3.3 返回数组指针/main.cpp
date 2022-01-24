// 本程序用于验证教材中6.3.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;
typedef int arrT[10] ;                    // arrT是一个类型别名，表示类型为含有10个整数的数组，一个等价声明是 using arrT = int[10] ;

arrT* func( int i ) ;

auto func2( int i ) -> int(*) [10] ;

int odd[] = { 1 , 3 , 5 , 7, 9 } ;
int even[] = { 0 , 2 , 4 , 6, 8 } ;
decltype( odd ) *arrPtr( int i ) ;

int main() {

    return 0;
}

decltype( odd ) *arrPtr( int i ){
    return ( i % 2 ) ? &odd : &even ;
}
