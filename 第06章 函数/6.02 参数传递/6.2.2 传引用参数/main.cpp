// ������������֤�̲���6.2.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

void reset( int &i ) ;
bool isShorter( const string &s1 , const string &s2 ) ;
string::size_type find_char( const string &s , char c ,string::size_type &occurs ) ;

int main() {
    int i = 42 ;
    reset( i ) ;                                               // i���ô����÷�ʽ��ֵ���ı�
    cout << i << endl;

    string s1{ "hello" } , s2{ "hiya" } ;
    cout << ( isShorter( s1 , s2 ) ? "s2�Գ�" : "s1�Գ�" ) << endl;

    /*
    const string s1{"Welcome to C++ family!"} ;
    string::size_type i = 0 ;
    cout << find_char( s1 , 'm' , i ) << " " << i << endl;
    */

    return 0 ;
}

void reset(int &i){                                                                           // i�Ǵ���reset�����������һ������
    i = 0 ;                                                                                     // �ı���i���������ֵ
}

bool isShorter( const string &s1 , const string &s2 ){
    return s1.size() < s2.size() ;
}

string::size_type find_char( const string &s , char c ,string::size_type &occurs ){
    string::size_type ret = s.size() ;                                                         // ��һ�γ��ֵ�λ�ã�����еĻ���
    occurs = 0 ;                                                                                 // ���ñ�ʾ�βε�ֵ
    for( string::size_type i = 0 ; i != s.size() ; ++i )
        if( s[i] == c ){
            if( ret == s.size() )                                                               // �жϲ���¼c��һ�γ��ֵ�λ��
                ret = i ;
            ++occurs;                                                                            // �����ִ���+1
        }
    return ret ;                                                                                // ����ֵ��s��c��һ�γ��ֵ�λ�����������ִ�����occurs����
}
