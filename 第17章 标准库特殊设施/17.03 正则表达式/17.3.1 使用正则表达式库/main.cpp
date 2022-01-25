// ������������֤�̲���17.3.1�����ݵĿɿ��ԣ����ṩ������֪

#define NDE_BUG1
#define NDE_BUG2

#include <iostream>
#include <regex>
using namespace std;


int main() {
    string pattern( "[^c]ei" ) ;                                // ���Ҳ����ַ�c֮����ַ���ei
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*" ;       // ��Ҫ����pattern����������
    regex r( pattern ) ;                                        // ����һ�����ڲ���ģʽ��regex
    smatch results ;                                            // ����һ��������󱣴��������
    string test_str = "receipt freind theif receive" ;          // ����һ��string������ģʽƥ���ƥ����ı�
    if( regex_search( test_str , results , r ) )                // ��r��test_str�в�����patternƥ����Ӵ�������ƥ���Ӵ�
        cout << results.str() << endl;                          // ��ӡƥ��ĵ���

    #ifndef NDE_BUG1
    regex r2( "[[:alnum:]] + \\.(cpp|cxx|cc)$" , regex::icase ) ;
    smatch results2 ;
    string filename ;
    while( cin >> filename )
        if( regex_search( filename , results2 , r2 ) )
            cout << results2.str() << endl;
    #endif // NDE_BUG1

    try{
        regex r3( "[[:alnum:]+\\.(cpp|cxx|cc)$" , regex::icase ) ;
    }catch ( regex_error e ){
        cout << e.what() << "\ncode: " << e.code() << endl;
    }

    #ifndef NDE_BUG2
    regex r4( "[[:alnum:]]+\\.(cpp|cxx|cc)$" , regex::icase ) ;
    smatch results4 ;                                               // ��ƥ��string�������У�������char*
    if( regex_search( "my_file.cc" , results4 , r4 ) )              // ��������Ϊchar*
        cout << results4.str() << endl;
    #endif // NDE_BUG2

    regex r5( "[[:alnum:]]+\\.(cpp|cxx|cc)$" , regex::icase ) ;
    cmatch results5 ;                                               // ��ƥ���ַ�������������
    if( regex_search( "my_file.cc" , results5 , r5 ) )              // �ɴ�ӡ��ǰƥ��
        cout << results5.str() << endl;
    return 0;
}
