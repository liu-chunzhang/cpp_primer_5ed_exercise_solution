// ������������֤��������ϰ12.23�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

char* link2charArr( const char* c1 , const char* c2 ) ;               // �������������ַ������泣���İ汾�����䱣��
string* link2str( const string& , const string& ) ;          // ������������string����İ汾�������䱣��

int main() {
    char c1[] = "Hello" , c2[] = "world" ;
    char* r = link2charArr( c1 , c2 ) ;                           // Ϊ����ȷ���ͷ��ڴ棬�ص�д�����м����
    cout << r << endl;
    delete[] r ;
    string s1 = "Hi" , s2 = "world!" ;
    string* r2 = link2str( s1 , s2 ) ;
    cout << *link2str( s1 , s2 ) << endl;
    delete r2 ;
    return 0;
}

char* link2charArr( const char* c1 , const char* c2 ){
    char* r( new char [ strlen( c1 ) + strlen( c2 ) + 1 ] ) ;
    strcpy( r , c1 ) ;
    strcat( r , c2 ) ;
    return r ;
}

string* link2str( const string& s1 , const string& s2 ){
    string* sp = new string ( s1 + s2 ) ;
    return sp ;
}
