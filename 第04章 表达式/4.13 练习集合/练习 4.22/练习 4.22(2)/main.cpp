// ������������֤��������ϰ4.22�е��뷨�����ڱ�Ҫ�ĵط�����˵����ʹ��if���
#include <iostream>
using namespace std;

int main() {
    unsigned grade = 0 ;
    cout << "��������Ҫ�����ȼ��ĳɼ���" << endl;
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
