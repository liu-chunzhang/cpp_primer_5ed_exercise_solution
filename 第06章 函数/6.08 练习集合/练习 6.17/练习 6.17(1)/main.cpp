// ������������֤��������ϰ6.17�е��뷨�����ڱ�Ҫ�ĵط�����˵�����ж�һ����׼������ַ������޴�С��ĸ
#include <iostream>
using namespace std;

bool exist_majuscule( const string &s ) ;

int main() {
    cout << "������һ�����ж����޴�С��ĸ���ַ�����" << endl;
    string s ;
    cin >> s ;
    cout << ( exist_majuscule( s ) ? "����ַ����д�д��ĸ��" : "����ַ����޴�д��ĸ��" ) << endl;
    return 0;
}

bool exist_majuscule( const string &s ){
    for( char c : s )
        if( isupper( c ) )
           return true ;
    return false ;
}
