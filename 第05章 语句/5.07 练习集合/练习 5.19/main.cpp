// ������������֤��������ϰ5.19�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    do{
        string str1 , str2 ;
        cout << "�������������ڱȽϴ�С���ַ�����" << endl;
        cin >> str1 >> str2 ;
        if( str1.size() > str2.size() )
            cout << str2 << "�ǽ϶̵��ַ�����" << endl;
        else
            if( str1.size() < str2.size() )
                cout << str1 << "�ǽ϶̵��ַ�����" << endl;
            else
                cout << "�����ַ����ȳ���" << endl;
    }while( cin ) ;
    return 0;
}
