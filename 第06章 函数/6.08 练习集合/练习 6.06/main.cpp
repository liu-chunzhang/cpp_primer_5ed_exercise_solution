// ������������֤��������ϰ6.6�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

double myADD( double val1 , double val2 ) ;

int main() {
    double num1 , num2 ;
    cout << "��������������" ;
    while( cin >> num1 >> num2 )
        cout << num1 << "��" << num2 << "����ͽ���ǣ�" << myADD( num1 , num2 ) << endl;
    return 0;
}

double myADD( double val1 , double val2 ) {
    double result = val1 + val2 ;
    static unsigned iCnt = 0 ;
    ++iCnt ;
    cout << "�ú����Ѿ��ۼ�ִ����" << iCnt << "�Ρ�" << endl;
    return result ;
}
