// ������������֤��������ϰ13.50�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "String.h"
#include <vector>

int main() {
    String s1( "first1" ) , s2( "second" ) ;
    vector<String> Svec ;
    Svec.reserve( 10 ) ;
    cout << "1 " ;
    Svec.push_back( s1 ) ;
    cout << "2 " ;
    Svec.push_back( std::move( s2 ) ) ;
    cout << "3 " ;
    Svec.push_back( String( "third" ) ) ;
    cout << "4 " ;
    Svec.push_back( "fourth" ) ;
    for_each( Svec.begin() , Svec.end() , []( const String &s ) -> void { cout << s << " " ; } ) ;
    cout << endl;
    return 0;
}

// Ĭ�ϳ�ʼ����vector<String>������ռ䣬��push_back����vector�ռ䲻����������Ԫ��ʱ�������µĿռ䣨ͨ���Ǽӱ��������ｫ�����ƶ����µĿռ��У�Ȼ��
// �ͷ��¿ռ�
