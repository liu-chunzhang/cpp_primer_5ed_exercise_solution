// ������������֤�̲���2.1.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    /*
    int i = 20 ;
    cout << i << endl;
    i = 024 ;
    cout << i << endl;
    i = 0x14;
    cout << i << endl;
    */

    /*
    char a = 'a' ;
    cout << sizeof(a) << endl;
    */

    /*
    string b = "12345678901234567890" ;             // string��ʵ���ڸ����п���������ͬ��������ͬһ������ͬһ���ǣ��������string��Ŷ೤���ַ�����
    cout << sizeof(b) << endl;                      // ����sizeof()���ǹ̶��ģ��ַ�����ռ�Ŀռ��ǴӶ��ж�̬����ģ���sizeof()�޹ء�
    */                                              // ������������Բο������ַ��https://www.cnblogs.com/wanghetao/archive/2012/04/04/2431760.html

    /*
    cout << b.length()<< endl;
    cout << "a really, really long string literal"  // �ֶ�����д���ַ�������ֵ
             " that spans two lines." << endl;
    */

    cout << '\n' << endl;                          // ����ĳЩת�����е�����
    cout << "\tHi!\n" << endl;

    cout << '\7' << endl;
    cout << "\x1234" << endl;
    return 0 ;
}
