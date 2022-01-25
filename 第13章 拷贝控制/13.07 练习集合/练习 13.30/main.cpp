// 本程序用于验证教材中13.3节内容的可靠性，并提供感性认知
#include "HasPtr.h"

int main() {
    HasPtr h1( "hello world!" ) , h2( h1 ) , h3 = h1 ;
    h2 = "welcome to C++ family!" ;
    h3 = "hiya" ;
    swap( h1 , h3 ) ;
    cout << "h1:" << *h1 << endl;
    cout << "h2:" << *h2 << endl;
    cout << "h3:" << *h3 << endl;
    return 0;
}

// 通过打印结果来看，swap函数实现了其目的
