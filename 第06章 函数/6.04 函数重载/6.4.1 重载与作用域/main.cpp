// ������������֤�̲���6.4.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

void print( const string &s ) ;
void print( double d ) ;
void print( int i ) ;

int main() {

    return 0;
}

string read(){
    string s = "Hello" ;
    return s ;
}

void print( const string &s ) {
    cout << s ;
}

void print( double d ){
    cout << d - static_cast<int>( d ) ;
}

void print( int i ){
    cout << i ;
}

/*
void fooBar( int ival ) {
    bool read = false ;
    string s = read() ;                       // ����read��һ��boolֵ�������Ǻ�������C++�����У����ֲ��������ͼ��֮ǰ��
    void print(int) ;                         // ���õ�ϰ�ߣ�ͨ����˵���ھֲ������������������ǲ��õ�ѡ����������������֮ǰ��print
    print( "Value: " ) ;                      // ����print(const string &)�����ص���
    print( ival ) ;                           // ��ȷ����ǰprint(int)�ɼ�
    print( 3.14 ) ;                           // ��ȷ������print(int)������print(double)��������
}
*/

void fooBar2( int ival ) {
    print( "Value: " ) ;
    print( ival ) ;
    print( 3.14 ) ;
}
