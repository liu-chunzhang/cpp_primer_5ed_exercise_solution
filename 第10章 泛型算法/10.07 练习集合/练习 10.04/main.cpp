// 本程序用于验证读者在练习10.4中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<double> ivec = { 0 , 1.1 , 2 , 3 , 4.6 , 5 , 6 , 7 , 8 , 9.5 } ;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 0 ) << endl;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 0.0 ) << endl;
    return 0 ;
}

// accumulate的第三个参数是和的初值，它还决定了函数的返回类型，以及函数中使用哪个加法运算符。因此，本题中的调用是错误的，第三个参数0告知accumulate
// 函数和是整型变量，使用整型加法运算符，下面的打印结果说明函数返回的是一个整数。正确的调用方法时将0.0作为第三个参数传递给accumulate，如第二个打印
// 结果
