// ������������֤��������ϰ6.11�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void reset_pi( double &d ) ;

int main() {
    double pi = 0 ;
    cout << "����reset����ǰpi��ֵΪ" << pi << endl;
    reset_pi( pi ) ;
    cout << "����reset������pi��ֵΪ" << pi << endl;
    return 0;
}

void reset_pi( double &d ){
    d = 3.1415926535 ;
}
