// ������������֤��������ϰ13.48�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <vector>
#include "String.h"

int main() {
    String s1( "first" ) , s2( "second" ) ;                                                        // ������д�ã������й۲��ӡ���������Ӧ
    vector<String> Svec ;                                                                         // ���溯�������String.cpp��Ѱ�ҽ��
    cout << "1 " << endl;
    Svec.push_back( s1 ) ;
    cout << "2 " << endl;
    Svec.push_back( std::move( s2 ) ) ;
    cout << "3 " << endl;
    char s3[] = "third" ;
    Svec.push_back( String( s3 ) ) ;
    cout << "4 " << endl;
    Svec.push_back( "four" ) ;
    cout << "5 " << endl;
    for_each( Svec.begin() , Svec.end() ,[]( const String& s )->void{ cout << s << " " ; } ) ;
    cout << endl;
    return 0;
}
