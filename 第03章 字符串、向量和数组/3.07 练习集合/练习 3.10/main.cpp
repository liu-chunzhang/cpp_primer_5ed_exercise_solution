// ������������֤��������ϰ3.10�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    string trans ,total ;
    cout << "������һ���ַ�����" << endl;
    getline( cin , trans );
    for( char c : trans )
        if( !ispunct( c ) )
            total += c;
    cout << total << endl;
    return 0;
}
