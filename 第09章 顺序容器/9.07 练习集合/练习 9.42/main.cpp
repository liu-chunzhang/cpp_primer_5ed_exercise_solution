// ������������֤��������ϰ9.42�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

void input_string( string &s ) ;

int main() {
    string s ;
    input_string( s ) ;
    cout << s << endl;
}

void input_string( string &s ) {
    s.reserve( 100 ) ;               // ��������ֱ��Ҫ���ٶ�ȡ100���ַ�����˿�����reverse��Ϊstring����100���ַ��Ŀռ䣬Ȼ�������ȡ�ַ���
    char c ;                        // ����push_back��ӵ�stringĩβ
    while( cin >> c )
        s.push_back( c ) ;
}
