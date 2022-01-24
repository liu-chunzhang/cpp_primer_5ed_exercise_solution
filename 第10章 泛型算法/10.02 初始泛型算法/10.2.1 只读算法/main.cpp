// 本程序用于验证教材中10.2.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<double> ivec = { 0 , 1 , 2 , 3 , 4.6 , 5.6 , 6 , 7 , 8 , 9 } ;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 10 ) << endl;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 10.0 ) << endl;            // 这个例子说明，第三个输入参数决定了使用的加法运算符类型

    vector<string> svec = { "Welcome" , "to" , "C++" , "family!" } ;
    cout << accumulate( svec.cbegin() , svec.cend() , string( "" ) ) + "|" << endl;
  //cout << accumulate( svec.cbegin() , svec.cend() , "" ) ;                        // 错误：因为const char*上没有定义+运算符

    vector<int> roster1 = { 0 , 1 , 2 , 3 } , roster2 = { 0 , 1 , 2 , 3 } ;
    cout << ( equal( roster1.cbegin() , roster1.cend() , roster2.cbegin() ) ? "roster1 == roster2" : "roster1 != roster2" ) << endl;
    return 0;
}
