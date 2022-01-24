// 本程序用于验证教材中2.4.4节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

constexpr int *np = nullptr ;
int j = 0 ;
constexpr int i = 42 ;

int anothersize() ;

int main() {
    constexpr int mf = 20 ;
    constexpr int limit = mf + 1 ;
    constexpr int sz = anothersize() ;
    constexpr const int *p = &i ;    // p是一个常量指针，指向整型常量i
    constexpr int *p1 = &j;          // p1是常量指针，指向整数j
    cout << limit << endl;
    return 0;
}

int anothersize() {
    return 5 ;
}
