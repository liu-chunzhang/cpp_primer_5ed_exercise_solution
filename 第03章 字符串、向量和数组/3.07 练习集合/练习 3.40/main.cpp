// ������������֤��������ϰ3.40�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    constexpr unsigned sz1 = 20 , sz2 = 20 ;
    constexpr unsigned sz = sz1 + sz2 ;
    char ca1[sz1] = "C++ " ;
    char ca2[sz2] = "family" ;
    char ca[sz] ;
    strcpy( ca , ca1 ) ;
    strcat( ca , ca2 ) ;
    cout << "��һ���ַ����ǣ�" << ca1 << endl;
    cout << "�ڶ����ַ����ǣ�" << ca2 << endl;
    cout << "�ϲ�����ַ����ǣ�" << ca << endl;
    return 0;
}
