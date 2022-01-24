// 本程序用于验证读者在练习4.22中的想法，并在必要的地方予以说明：使用if语句
#include <iostream>
using namespace std;

int main() {
    unsigned grade = 0 ;
    cout << "请输入您要评估等级的成绩：" << endl;
    cin >> grade ;
    string finalgrade ;
    if ( grade > 90 )
        finalgrade = "high pass" ;
    else    if ( grade > 75 )
                finalgrade = "pass" ;
            else    if ( grade >= 60 )
                        finalgrade = "low pass" ;
                    else
                        finalgrade = "fail" ;
    cout << finalgrade << endl;
    return 0;
}
