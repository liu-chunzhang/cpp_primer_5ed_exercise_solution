// ������������֤��������ϰ2.37�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int a = 3 , b = 4 ;
    decltype( a ) c = a ;                                       // cֻ��һ�����ͱ���
    decltype( a = b ) d = a ;                                   // d��a����������
    cout << a << " " << b << " " << c << " " << d << endl;      // ���Ӧ��Ϊ3 4 3 3
    return 0;
}
