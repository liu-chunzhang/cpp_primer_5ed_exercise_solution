// 本程序用于验证读者在练习13.22中的想法，并在必要的地方予以说明
#include "HasPtr.h"

int main() {
    HasPtr h1( "hello world!" ) , h2( h1 ) , h3 = h1 ;
    h2 = "welcome to C++ family!" ;
    h3 = "hiya" ;
    cout << "h1:" << *h1 << endl;
    cout << "h2:" << *h2 << endl;
    cout << "h3:" << *h3 << endl;
    return 0;
}

// 这个程序做到的效果是进行拷贝的HasPtr共享底部数据
