// ������������֤�̲���12.1.5�����ݵĿɿ��ԣ����ṩ������֪
#include "connection.h"

unique_ptr<int> clone( int p ) ;
unique_ptr<double> clone( double p ) ;

int main() {
    unique_ptr<double> p1 ;
    unique_ptr<int> p2( new int( 42 ) ) ;

    unique_ptr<string> p21( new string( "Stegosaurus" ) ) ;
  //unique_ptr<string> p22( p21 ) ;                                // ����unique_ptr��֧�ֿ���
    unique_ptr<string> p23 ;
  //p23 = p21 ;                                                    // ����unique_ptr��֧�ָ�ֵ

    unique_ptr<string> p31( new string( "Stegosaurus" ) ) ;
    unique_ptr<string> p32( p31.release() ) ;
    unique_ptr<string> p33( new string( "Trex" ) ) ;
    cout << "|" << *p32 << "| |" << *p33 << "|" << endl;
    p32.reset( p33.release() ) ;
  //cout << "|" << *p32 << "| |" << *p33 << "|" << endl;           // ��ʱp33�Ķ����Ѿ����ͷŵ��ˣ���ָ��p33��δ������Ϊ

    p32.release() ;                                               // ����p2�����ͷ��ڴ棬�������Ƕ�ʧ��ָ�룬���Ǳ���������������������
    unique_ptr<string>::pointer p = p32.release() ;             // �˴�auto��ʵָ���ͺ���֣���*�����Դ���˴���::pointer
    return 0;
}

unique_ptr<int> clone( int p ){
    return unique_ptr<int>( new int( p ) ) ;
}

unique_ptr<double> clone( double p ){
    unique_ptr<double> ret( new double (p) ) ;
    return ret ;
}
