// ������������֤��������ϰ6.17�е��뷨�����ڱ�Ҫ�ĵط�����˵������string����ȫ����дΪСд��ʽ
#include <iostream>
using namespace std;

void change_majuscules_to_minuscule( string &s ) ;

int main() {
    cout << "������һ����Ҫ�����ڲ�ȫ����д��ĸ��дΪСд��ĸ���ַ�����" << endl;
    string s ;
    cin >> s ;
    change_majuscules_to_minuscule( s ) ;
    cout << "ת������ַ���Ϊ" << s << endl;
    return 0;
}

void change_majuscules_to_minuscule( string &s ){                      // minuscule��ΪСд��ĸ��majuscule��Ϊ��д��ĸ
    for( char &c : s )
        c = tolower( c ) ;
}
