// ������������֤�̲���6.3.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

char &get_val( string &str , string::size_type ix ) ;
string make_plural( size_t ctr , const string &word , const string &ending ) ;
const string &shorterString( const string &s1 , const string &s2 ) ;
int factorial( int val ) ;

int main() {
    string s( "a value" ) ;
    cout << s << endl;
    get_val( s , 0 ) = 'A' ;                  // ����ֵ�Ǹ����ã����Ժ�������ֵһ��Ҳ�ܳ����ڸ�ֵ���������ࡣ
    cout << s << endl;
  //shorterString( "hi" , "bye" ) = "X" ;     // ���󣺷���ֵ�Ǹ�����

    int i = 0 ;
    if( i )
        return EXIT_SUCCESS ;
    else
        return EXIT_FAILURE ;
}

/*
bool str_subrange( const string &str1 , const string &str2 ){                    // ��Ϊ�������Ͳ���ȷ�ķ���ֵ��������α����޷�ͨ������
    if( str1.size() == str2.size() )
        return str1 == str2 ;
    size_t size0 = ( str1.size() < str2.size() ) ? str1.size() : str2.size() ;   // size_t���Ϳ������ڷ����������У�����size_typeֻ������
    for( size_t i = 0 ; i != size0 ; ++i )                                       // �����������Ȼ���������ڱ�ʾstrign����Ĵ�С
        if( str1[i] != str2[i] )
            return ;                                                             // û�з���ֵ����������������һ����
}                                                                                // ������������δ�����κ�ֵ�ͽ����˺�����ִ�С�ʵ���ϣ�
                                                                                 // ������ȷʵû�м����������
*/

string make_plural( size_t ctr , const string &word , const string &ending ) {
    return  ctr > 1  ? word + ending : word ;
}

const string &shorterString( const string &s1 , const string &s2 ) {
    return s1.size() <= s2.size() ? s1 : s2 ;
}

/*
const string &manip(){
    string ret ;
    if( !ret.empty() )
        return ret ;                                                             // ���󣺷��ؾֲ���������ã�
    else
        return "Empty" ;                                                         // ����"empty"��һ���ֲ���ʱ��
}
*/

char &get_val( string &str , string::size_type ix ) {                                // get_val�ٶ�����ֵ����Ч��
    return str[ix] ;
}

/*
vector<string> process() {
    string excepted , actual ;
    if( excepted.empty() )
        return { } ;
    else if( excepted == actual )
        return { "functionX" , "okay" } ;
    else
        return { "functionX" , excepted , actual } ;
}
*/

int factorial( int val ) {
    if( val > 1 )
        return factorial( val - 1 ) * val ;
    return 1 ;
}
