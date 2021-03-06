// 本程序用于验证读者在练习5.24中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    cout << "请依次输入被除数和除数：" << endl;               // 在本题中，设定当检测到除数为0时抛出一个runtime_error异常，因为没有catch语句，
    int ival1 , ival2 ;                                       // 因而系统只报告异常而不处理它。
    cin >> ival1 >> ival2 ;
    if( ival2 == 0 )
        throw runtime_error( "除数不能是0" ) ;
    cout << "两数相除的结果是：" << static_cast<double>(ival1) / ival2 << endl;
    return 0;
}
