// ������������֤�̲���13.6.3�����ݵĿɿ��ԣ����ṩ������֪
#include "Foo.h"
#include "StrVec.h"

int main() {
    StrVec Svec ;
    string s = "some string or another" ;
    Svec.push_back( s ) ;                                  // ��������ֵ������push_back( const string& )
    Svec.push_back( "done" ) ;                             // ��ʱstring����ֵ������push_back( string&& )

    string s1 = "a value" , s2 = "another" ;
    string::size_type n = ( s1 + s2 ).find( 'h' ) ;
    cout << n ;
    s1 + s2 = "wow!" ;

    Foo i , j ;                                             // i��j����ֵ
    i = j ;                                                 // ��ȷ��i����ֵ
    retFoo() = j ;                                          // ��ȷ��retFoo()����һ����ֵ
    retVal() = j ;                                          // ����retVal()����һ����ֵ
    i = retVal() ;                                          // ��ȷ�����ǿ��Խ�һ����ֵ��Ϊ��ֵ�������Ҳ��������
    return 0;
}
