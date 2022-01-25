// 本程序用于验证教材中13.1.1节内容的可靠性，并提供感性认知
#include <vector>
#include "Sales_data.h"

void f( const vector<int> &ivec ) ;

int main() {
    string dots( 10 , '.' ) ;                   // 直接初始化
    string s( dots ) ;                          // 直接初始化
    string s2 = dots ;                          // 拷贝初始化
    string null_book = "9-999-99999-9" ;        // 拷贝初始化
    string nines = string( 100 , '9' ) ;       // 拷贝初始化

    vector<int> v1( 10 ) ;
    vector<int> v2 = 10 ;                       // 接受大小参数的构造函数是explicit的
    f( 10 ) ;                                    // 错误：不能用explicit的构造函数拷贝一个实参
    f( vector<int>( 10 ) ) ;
    return 0;
}

void f( const vector<int> &ivec ) {
    cout << "The function about vector<int> is running!" << endl;
}
