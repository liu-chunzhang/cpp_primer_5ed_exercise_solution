// ������������֤�̲���3.5.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    /*
    char ca1[] = { 'c' , '+' , '+' };                           // ���Կ��ַ�����
    char ca2[] = { 'c' , '+' , '+' , '\0' } ;                   // �Կ��ַ�����
    cout << strlen( ca1 ) << " " << strlen( ca2 ) << endl;      // ���ش���caû���Կ��ַ�������������Ȳ��ᱨ��Ҳû�о��棡
    */

    /*
    string s1 = "A string example" ;
    string s2 = "A different string" ;
    if( s1 < s2 )                                  // ��Ȼ�����ַ���֮��ıȽϣ�s1>s2������ʵ��else��֧����
        cout << "s1 < s2" << endl;
    else
        cout << "s2 <= s1" << endl;
    */

    /*
    const char ca1[] = "A string example" ;
    const char ca2[] = "A different string" ;

    if( ca1 > ca2 ){
        cout << "ca1 > ca2" << endl;                // ʵ���ϣ����б������ͨ�����ޱ���;��棬ִ��Ч������һ��ûʲô����
        cout << *( ca1 + 3 ) << endl;               // Ҳ����ͨ�������û�ȡ�ַ����ڵ�ֵ
    }
    else
        cout << "ca1 <= ca2" << endl;
    if( strcmp( ca1 , ca2 ) > 0 )
        cout << "ca1 > ca2" << endl;
    const char ca3[] = "A string example" ;       // ʹ��char��������ʵ�����õ���ָ��������Ԫ��ָ��
    if( ca1 == ca3 )
        cout << "1" ;
    */

    /*
    string largeStr0 = s1 + s2 ;
  //string largeStr00 = ca1 + ca2 ;
    char largeStr[50];                             // ����largeStr�����ͱ�����char��������string�������ܹ���������ĺ���
    strcpy(largeStr , ca1) ;
    strcat(largeStr , " ") ;
    strcat(largeStr , ca2) ;
    cout << largeStr << endl;
    */

    return 0;
}
