// ������������֤��������ϰ4.22�е��뷨�����ڱ�Ҫ�ĵط�����˵����ֻʹ�����������
#include <iostream>
using namespace std;

int main() {
    unsigned grade = 0 ;
    cout << "��������Ҫ�����ȼ��ĳɼ���" << endl;
    cin >> grade ;                                     // ��Ϊ����������ɶ��Բ�������ص�д��������ӣ���ǿ��ɶ���
    string finalgrade = ( grade > 90 ) ? "high pass" :
                                        ( grade > 75) ? "pass" :
                                                        ( grade >= 60 ) ? "low pass" : "fail" ;
    cout << finalgrade << endl;
    return 0;
}
