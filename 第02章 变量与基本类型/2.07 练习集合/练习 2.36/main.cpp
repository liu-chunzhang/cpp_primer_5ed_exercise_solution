// ������������֤��������ϰ2.36�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int a = 3 , b = 4 ;
    decltype( a ) c = a ;                                       // c�����ͱ���
    decltype(( b )) d = a ;                                     // d���������ã���a��
    ++c ;                                                        // c�����������޹أ�ֻ�ǵ���ִ����������
    ++d ;                                                        // d��a�ı���������dִ������������aͬ��ִ��
    cout << a << " " << b << " " << c << " " << d << endl;      // Ԥ�����4 4 4 4
    return 0;
}
