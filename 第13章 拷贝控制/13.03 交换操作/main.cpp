// 本程序用于验证教材中13.3节内容的可靠性，并提供感性认知
#include "HasPtr.h"

int main() {
    HasPtr h1( "hello world!" ) , h2( h1 ) , h3 = h1 ;
    h2 = "welcome to C++ family!" ;
    h3 = "SEER" ;
    cout << "h1:" << *h1 << endl;
    cout << "h2:" << *h2 << endl;
    cout << "h3:" << *h3 << endl;
    return 0;
}

// 这个程序做到的效果是进行拷贝的HasPtr共享底部数据
