// ������������֤�̲���6.5.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;
typedef string::size_type sz ;

sz wd = 80 ;
char def = '!' ;
sz ht() ;

string screen( sz ht = 24 , sz wid = 80 , char backgrnd = ' ' ) ;
string screen2( sz = ht() , sz = wd , char = def ) ;
void f2() ;

string window2 = screen2() ;

int main() {
    string window ;
    window = screen() ;                     // �ȼ���screen( 24 , 80 , ' ' )
    window = screen( 66 ) ;                 // �ȼ���screen( 66 , 80 , ' ' )
    window = screen( 66 , 256 ) ;           // �ȼ���screen( 66 , 256 , ' ' )
    window = screen( 66 , 256 , '#' ) ;     // �ȼ���screen( 66 , 256 , '#' )
    window = screen( , , '?' ) ;            // ����ֻ��ʡ��β����ʵ�Σ�
    window = screen( '?' ) ;                // ʵ�ʵ��ó���screen( 63 , 80 , ' ' )
    for( size_t i = 0 ; i != 5 ; ++i )
        cout << screen( i ) ;
    return 0;
}

string screen( sz ht , sz wid , char backgrnd ) {
    string s( "Hello world!" ) ;
    return s;
}

sz ht() {
    return 3 ;
}

void f2() {
    def = '*' ;                             // �ı���Ĭ��ʵ�ε�ֵ
    sz wd = 100 ;                           // ��������㶨���wd������û�иı�Ĭ��ֵ
    window2 = screen2() ;                   // ������screen( ht() , 80 , '*' )
}
