// ������������֤�̲���6.2.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

void reset( int* ip ) ;
void reset( int &i ) ;
string::size_type find_char( const string &s , char c ,string::size_type &occurs ) ;

int main() {
    /*
    const int ci = 42 ;
    int i = ci ;
    cout << ci << " " << i << endl;
  //int *const p = &ci ;                          // ��ų�������ĵ�ַ��ֻ���ô�ų�����ָ��
  //*p = 0 ;
    cout << ci << " " << i << endl;
    */

    int i = 0 ;
    const int ci = i ;
    string::size_type ctr = 0 ;
    reset( &i ) ;
    reset( &ci ) ;                                  // ���󣺲�����ָ��const int�����ָ���ʼ��int*
    reset( i ) ;                                    // ����������int&��reset����
    reset( ci ) ;                                   // ���󣺲��ܰ���ͨ���ð󶨵�const����ci��
    reset( 42 ) ;                                   // ���󣻲��ܰ���ͨ���ð󶨵�����ֵ��
    reset( ctr ) ;                                  // �������Ͳ�ƥ�䣬��Ϊctr���޷�������
    find_char( "Hello world!" , 'o' ,ctr ) ;        // find_char�ĵ�һ���β��ǳ�������

    return 0;
}

void reset( int* ip ) {
    *ip = 0 ;
    ip = 0 ;
}

void reset( int &i ) {
    i = 0 ;
}

string::size_type find_char( const string &s , char c ,string::size_type &occurs ){
    string::size_type ret = s.size() ;                                                         // ��һ�γ��ֵ�λ��
    occurs = 0 ;                                                                                 // ���ñ�ʾ�βε�ֵ
    for( string::size_type i = 0 ; i != s.size() ; ++i )
        if( s[i] == c ){
            if( ret == s.size() )                                                               // �жϲ���¼c��һ�γ��ֵ�λ��
                ret = i ;
            ++occurs;                                                                           // �����ִ���+1
        }
    return ret + 1 ;                                                                            // ����ֵ��s��c��һ�γ��ֵ�λ�����������ִ���
}
