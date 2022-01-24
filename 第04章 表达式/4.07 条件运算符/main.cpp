// 本程序用于验证教材中4.7节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {

    unsigned grade1 = 0;
    cin >> grade1 ;
    string finalgrade1 = ( grade1 < 60 ) ? "fail" : "pass" ;
    cout << finalgrade1 << endl;

    unsigned grade2 = 0 ;
    cin >> grade2 ;
    string finalgrade2 = ( grade2 > 90) ? "high pass" :
                                        ( grade2 > 60 ) ? "pass" : "fail" ;
    cout << finalgrade2 ;

    unsigned grade3 = 0 ;
    cin >> grade3 ;
    cout << ( ( grade3 < 60 ) ? "fail" : "pass" ) << endl;                     // 输出pass或者fall
    cout << ( grade3 < 60 ) ? cout << " fail" : cout << " pass" ;             // 输出1或者0
    cout << grade3 < 60 ? "fail" : "pass" ;                                    // 错误：试图比较cout和60

    return 0;
}
