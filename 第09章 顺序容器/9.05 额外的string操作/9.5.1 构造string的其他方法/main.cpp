// ������������֤��������ϰ9.5.1�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    const char *cp = "Hello World!!!" ;     // �Կ��ַ�����������
    char noNull[ ] = { 'H' , 'I' } ;        // �����Կ��ַ�����
    string s1( cp ) ;                       // ����cp�е��ַ�ֱ���������ַ���s1 == "Hello World!!!"
    cout << s1 << endl;
    string s2( noNull , 2 ) ;               // ��noNull�����������ַ�
    cout << s2 << endl;
    string s3( noNull ) ;                   // ʵ������δ�������Ϊ��noNull�����Կ��ַ�������
    cout << s3 << endl;
    string s4( cp + 6 , 5 ) ;               // ��cp[6]��ʼ����5���ַ���s4 == "World"
    cout << s4 << endl;
    string s5( s1 , 6 , 5 ) ;               // ��s1[6]��ʼ����5���ַ���s5 == "World"
    cout << s5 << endl;
    string s6( s1 , 6 ) ;                   // ��s1[6]��ʼ������ֱ��s1ĩβ��s6 == "World!!!"
    cout << s6 << endl;
    string s7( s1 , 6 , 20 ) ;              // ��ȷ��ֻ������s1ĩβ��s7 == "World!!!"
    cout << s7 << endl;
  //string s8( s1 , 16 ) ;                  // �׳�һ��out_of_range�쳣
  //cout << s8 << " " << endl;

    string s( "hello world" ) ;
    cout << s << endl;
    string s22 = s.substr( 0 , 5 ) ;        // s22 == hello
    cout << s22 << endl;
    string s23 = s.substr( 6 ) ;            // s23 == world
    cout << s23 << endl;
    string s24 = s.substr( 6 , 11 ) ;       // s24 == world
    cout << s24 << endl;
  //string s25 = s.substr( 12 ) ;            // s25���׳�һ��out_of_range�쳣
  //cout << s25 << endl;
    return 0;
}
