// ������������֤��������ϰ6.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

double absoluteValue( double d ){
    return ( d >= 0 ) ? d : -d ;
}

int main() {
    double d ;
    cout << "������һ��˫���ȸ�������" << endl;
    cin >> d ;
    cout << absoluteValue( d ) << endl;
    return 0;
}
