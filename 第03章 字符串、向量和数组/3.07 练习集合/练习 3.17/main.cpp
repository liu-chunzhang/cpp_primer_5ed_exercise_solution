// ������������֤��������ϰ3.17�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str ;                                   // ����������ڼ�¼�û�������ֵ
    vector<string> vstr ;                         // Ԫ������Ϊstring���͵�vector����
    for( size_t i = 0 ; cin >> str ; ++i )        // ���ѭ�����ڽ�����Ķ���ȫ������vector����
        vstr.push_back( str ) ;
    for( string &i : vstr ){                      // ʹ�÷�Χforѭ��������vstr�е�ÿ��Ԫ��
        for( char &j : i )                        // ʹ�÷�Χforѭ��������vstr�е�ÿ��Ԫ��
            j = toupper( j ) ;                     // ��дСд��ĸΪ��д��ĸ
        cout << i << endl;                        // ����string������ʽ�����endl��֤����
    }
    return 0;
}
