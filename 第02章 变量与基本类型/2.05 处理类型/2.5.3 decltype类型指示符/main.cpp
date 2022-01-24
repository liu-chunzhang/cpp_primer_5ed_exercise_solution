// 本程序用于验证教材中2.5.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    const int ci = 0 , &cj = ci ;
    decltype(ci) x = 0 ;                // x的类型是整型常量
    decltype(cj) y = x ;                // y的类型是整型引用常量
    decltype(cj) z ;                    // z的类型同y，是一个引用，所以必须初始化!

    int i = 42 , *p = &i , &r = i ;
    decltype(r + 0) b ;                 // 加法的结果是int，因此b是一个未初始化的int
    decltype(*p) c ;                    // c是int&，所以必须初始化！

    decltype((i)) d;                    // d是int&，必须初始化！
    decltype(i) e;                      // c是int，不必初始化
    return 0;
}
