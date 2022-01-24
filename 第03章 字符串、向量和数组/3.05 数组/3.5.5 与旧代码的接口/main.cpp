// 本程序用于验证教材中3.5.5节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    string s( "Hello World!" ) ;
    char *str = s ;                                           // 错误：不能用string对象初始化char*
    const char *str = s.c_str();                              // 正确：c_str函数返回值是C风格字符串，函数的返回对象是一个指针，它指向了一个以
    cout << str << endl;                                      // 空字符结束的字符数组
    */

    /*
    int int_arr[] = { 0 , 1 , 2 , 3 , 4 , 5 } ;
    vector<int> ivec( begin(int_arr) , end(int_arr) ) ;     // 使用一对迭代器初始化vector，这种初始化方式见P299
    for( int i : ivec )
        cout << i << " " ;
    cout << endl;
    vector<int> subVec( int_arr + 1 , int_arr + 4 ) ;
    for( int i : subVec )
        cout << i << " " ;
    */
    return 0;
}
