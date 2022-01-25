// ������������֤�̲���17.3.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <regex>
using namespace std;

bool valid( const smatch &m ) ;

int main() {
    regex r( "([[:alnum:]]+)\\.(cpp|cxx|cc)$" , regex::icase ) ;

    string pattern( "[^c]ei" ) ;
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*" ;
    regex r2( pattern ) ;
    smatch results ;
    string test_str = "receipt freind theif receive" ;
    if( regex_search( test_str , results , r2 ) )
        cout << results.str( 1 ) << endl;

    string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ]?)(\\d{4})" ;
    regex r3( phone ) ;
    smatch m ;
    string s ;
    while( getline( cin , s ) ){
        for( sregex_iterator it( s.begin() , s.end() , r3 ) , end_it ; it != end_it ; ++it )
            if( valid( *it ) )                                  // ������sregex_iteratorʱ������һ����Ӧ���һ����������е�smatch����
                cout << "valid: " << it->str() << endl;
            else
                cout << "not valid: " << it->str() << endl;
    }
    return 0;
}

bool valid( const smatch &m ) {
    if( m[1].matched )                                                          // �������ǰ��һ��������
        return m[3].matched && ( m[4].matched == 0 || m[4].str() == " " ) ;     // �����ź������һ�������ţ�֮�����ʣ������һ���ո�
    else                                                                        // �������ź���������
        return !m[3].matched && m[4].str() == m[6].str() ;                      // ��������ɲ��ּ�ָ�������ƥ��
}
