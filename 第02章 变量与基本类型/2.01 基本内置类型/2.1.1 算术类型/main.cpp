// ������������֤�̲���2.1.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main(){
    cout << "Size of bool :" << sizeof(bool) << endl;                    // sizeof ��һ���ؼ��֣�����һ������ʱ������������жϱ������������͵��ֽڴ�С��
    cout << "Size of char : " << sizeof(char) << endl;                   // sizeof ����������ڻ�ȡ�ࡢ�ṹ��������������û��Զ����������͵Ĵ�С��
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;             // ʹ�� sizeof ���﷨���£�
    cout << "Size of char16_t : " << sizeof(char16_t) << endl;           // sizeof (data type)
    cout << "Size of char32_t : " << sizeof(char32_t) << endl;           // ���У�data type ��Ҫ�����С���������ͣ������ࡢ�ṹ��������������û��Զ���
    cout << "Size of short : " << sizeof(short) << endl;                 // �������͡�
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of long double : " << sizeof(long double) << endl;
    return 0;
}
