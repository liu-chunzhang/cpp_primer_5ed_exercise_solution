// ������������֤�̲���4.7�����ݵĿɿ��ԣ����ṩ������֪
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
    cout << ( ( grade3 < 60 ) ? "fail" : "pass" ) << endl;                     // ���pass����fall
    cout << ( grade3 < 60 ) ? cout << " fail" : cout << " pass" ;             // ���1����0
    cout << grade3 < 60 ? "fail" : "pass" ;                                    // ������ͼ�Ƚ�cout��60

    return 0;
}
