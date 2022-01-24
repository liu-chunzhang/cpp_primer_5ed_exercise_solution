// 本程序用于验证读者在练习6.6中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

double myADD( double val1 , double val2 ) ;

int main() {
    double num1 , num2 ;
    cout << "请输入两个数：" ;
    while( cin >> num1 >> num2 )
        cout << num1 << "与" << num2 << "的求和结果是：" << myADD( num1 , num2 ) << endl;
    return 0;
}

double myADD( double val1 , double val2 ) {
    double result = val1 + val2 ;
    static unsigned iCnt = 0 ;
    ++iCnt ;
    cout << "该函数已经累计执行了" << iCnt << "次。" << endl;
    return result ;
}
