// ������������֤��������ϰ3.39�е��뷨�����ڱ�Ҫ�ĵط�����˵�����Ƚ�����C����ַ���
#include <iostream>
#include <cstring>                                                                        // ��һ����֮ͬ�����Ƚ�����C����ַ�������ʹ��cstring
using namespace std;                                                                    // ͷ�ļ������strcmp����������׼��string�����˹�ϵ�����

int main() {
    char str1[100] , str2[100] ;
    cout << "������Ҫ�Ƚϵ������ַ������м��ÿո�������Ҳ�Ҫ����100�ַ���" << endl;     // �ڶ�����֮ͬ����ʹ���ַ�������������ǰ�޶���С
    cin >> str1 >> str2 ;
    int result = strcmp( str1 , str2 ) ;
    switch( result ){                                                                    // �˴���strcmp�����Ľ������switch��䣬����������
           case 1:                                                                       // ��һ��ʹ�ÿ��Լ��̲�5.3.2��
               cout << str1 << ">" << str2 << endl;
               break;
           case -1:
               cout << str1 << "<" << str2 << endl;
               break;
           case 0:
               cout << str1 << "=" << str2 << endl;
               break;
           default:
               cout << "δ����Ľ����" << endl;
               break;
    }
    return 0;
}
