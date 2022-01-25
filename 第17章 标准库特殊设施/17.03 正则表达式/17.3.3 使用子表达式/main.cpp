// 本程序用于验证教材中17.3.3节内容的可靠性，并提供感性认知
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
            if( valid( *it ) )                                  // 解引用sregex_iterator时，返回一个对应最近一次搜索结果中的smatch对象
                cout << "valid: " << it->str() << endl;
            else
                cout << "not valid: " << it->str() << endl;
    }
    return 0;
}

bool valid( const smatch &m ) {
    if( m[1].matched )                                                          // 如果区号前有一个左括号
        return m[3].matched && ( m[4].matched == 0 || m[4].str() == " " ) ;     // 则区号后必须有一个左括号，之后紧跟剩余号码或一个空格
    else                                                                        // 否则区号后不能有括号
        return !m[3].matched && m[4].str() == m[6].str() ;                      // 另两个组成部分间分隔符必须匹配
}
