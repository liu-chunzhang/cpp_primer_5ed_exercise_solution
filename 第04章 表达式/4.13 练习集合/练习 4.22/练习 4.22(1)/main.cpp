// 本程序用于验证读者在练习4.22中的想法，并在必要的地方予以说明：只使用条件运算符
#include <iostream>
using namespace std;

int main() {
    unsigned grade = 0 ;
    cout << "请输入您要评估等级的成绩：" << endl;
    cin >> grade ;                                     // 因为条件运算符可读性差，所以我特地写成这个样子，增强其可读性
    string finalgrade = ( grade > 90 ) ? "high pass" :
                                        ( grade > 75) ? "pass" :
                                                        ( grade >= 60 ) ? "low pass" : "fail" ;
    cout << finalgrade << endl;
    return 0;
}
