// 本程序用于验证教材中14.8.2节内容的可靠性，并提供感性认知
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    plus<int> intAdd ;                                               // 可执行int加法的函数对
    negate<int> intNegate ;                                          // 可对int值取反的函数对象
    int sum = intAdd( 10 , 20 ) ;                                     // 等价于int sum = 10 + 20 ;
    cout << sum << endl;                                             // 打印结果为30
    sum = intNegate( intAdd( 10 ,20 ) ) ;                             // 等价于sum = - ( 10 + 20 ) ;
    cout << sum << endl;                                             // 打印结果为-30
    sum = intAdd( 10 , intNegate( 10 ) ) ;                            // 等价于sum = 10 + ( - 10 ) ;
    cout << sum << endl;                                             // 打印结果是0

    vector<string> svec ;
    sort( svec.begin() , svec.end() , greater<string>() ) ;        // 传入一个临时函数对象用于执行两个string对象的>比较运算
    vector<string*> spvec ;
    sort( spvec.begin() , spvec.end() , less<string*>() ) ;        // 标准库规定的指针的less是良定义的
    return 0;
}
