// ������������֤��������ϰ2.15�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int ival = 1.01 ;                            // (a)��Ȼ�ǲ��������խ�����������ǲ��ᱨ����������
    int &rval1 = 1.01 ;                          // (b)���Ϸ������ñ���ָ��һ��ʵ�ʴ��ڵĶ������������ֵ����
    int &rval2 = ival ;                          // (c)�Ϸ�
    int &rval3 ;                                 // (d)���ñ����ʼ����
    cout << rval1 << rval2 << rval3 << endl;
    return 0;
}
