// ������������֤�̲���6.7�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;
using F = int( int * , int ) ;
using PF = int(*)( int * , int ) ;
typedef bool Func( const string & , const string & ) ;                      // Func�Ǻ�������
typedef bool ( *FuncP )( const string & , const string & ) ;             // Func2��ָ������ָ��

bool lengthCompare( const string &s1 , const string &s2 ) ;
bool ( *pf )( const string & , const string & ) ;
string::size_type sumLength( const string &s1 , const string &s2 ) ;
bool cstringCompare( const char *p1 , const char *p2 ) ;
void ff( int *i ) ;
void ff( unsigned int u ) ;
void ( *pf1 )( unsigned int ) = ff ;                                          // pf1ָ��ff( unsigned )
void useBigger( const string &s1 , const string &s2 , Func ) ;

PF f11( int ) ;                                                                // PF��ָ������ָ��
F f12( int ) ;                                                                 // ����F�Ǻ������ͣ�f1���ܷ���һ������
F *f13( int ) ;                                                                // ��ȷ����ʽָ�����������Ǻ���ָ��

int main() {
    pf = lengthCompare ;                                                       // ��Ϊpf�Ѿ�����Ϊ�˺���ָ�룬���Բ���Ҫ������������
    auto pf2 = &lengthCompare ;                                               // ��auto���¶���Ҳû���⣻pf2�ͱ������¶���
    bool b1 = pf( "hello" , "goodbye" ) ;
    bool b2 = ( *pf )( "hello" , "goodbye" ) ;
    bool b3 = lengthCompare( "hello" , "goodbye" ) ;
    cout << boolalpha << pf2 << " " << b1 << " " << b2 << " " << b3 << endl;  // ����һ��������������ı������þ��棬ʵ��û�ã�

    pf = 0 ;
    pf = sumLength ;                                                           // �������Ͳ�ƥ��
    pf = cstringCompare ;                                                      // �β����Ͳ�ƥ��
    pf = lengthCompare ;

    void ( *pf3 )( int ) = ff ;                                               // ����û��һ��ff����β��б�ƥ��
    double ( *pf4 )( int * ) = ff ;                                           // ����ff��pf3�ķ������Ͳ�ƥ��

    return 0;
}

bool lengthCompare( const string &s1 , const string &s2 ) {
    return ( s1.size() > s2.size() ) ? true : false ;
}

string::size_type sumLength( const string &s1 , const string &s2 ){
    return s1.size() + s2.size() ;
}

bool cstringCompare( const char *p1 , const char *p2 ) {
    return ( &p1 > &p2 ) ? true : false ;
}

void ff( int *i ) { cout << "ff( int *" << *i << endl; }

void ff( unsigned int u ) { cout << "ff( unsigned int *" << u << endl; }
