// 本程序用于验证读者在练习18.5中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    try{
    /* ... 其他程序正文 ... */
    }catch( const exception &e ){
        cerr << e.what() << endl;
        abort() ;                       // 此处不需要添加<cstdlib>头文件
    }
    return 0 ;
}

// 想打印错误信息的话，还是使用exception类进行捕获比较妥当
