// 本程序用于验证教材中13.6.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    int i = 42 ;
    int &r = i ;
    int &&rr = i ;                  // 错误：不能将一个右值引用绑定到一个左值上
    int &r2 = i * 42 ;              // 错误：i*42是一个右值
    const int &r3 = i * 42 ;        // 正确：可以将一个const的引用绑定到一个右值上
    int &&rr2 = i * 42 ;            // 正确：将rr2绑定到乘法结果上

    int &&rr1 = 42 ;
    int &&rr22 = rr1 ;               // 错误：表达式rr1是右值
    int &&rr3 = std::move( rr1 ) ;
    return 0;
}
