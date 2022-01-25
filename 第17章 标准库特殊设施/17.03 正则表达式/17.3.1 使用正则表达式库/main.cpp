// 本程序用于验证教材中17.3.1节内容的可靠性，并提供感性认知

#define NDE_BUG1
#define NDE_BUG2

#include <iostream>
#include <regex>
using namespace std;


int main() {
    string pattern( "[^c]ei" ) ;                                // 查找不在字符c之后的字符串ei
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*" ;       // 需要包含pattern的整个单词
    regex r( pattern ) ;                                        // 构造一个用于查找模式的regex
    smatch results ;                                            // 定义一个对象对象保存搜索结果
    string test_str = "receipt freind theif receive" ;          // 定义一个string保存与模式匹配或不匹配的文本
    if( regex_search( test_str , results , r ) )                // 用r在test_str中查找与pattern匹配的子串。若有匹配子串
        cout << results.str() << endl;                          // 打印匹配的单词

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
    smatch results4 ;                                               // 将匹配string输入序列，而不是char*
    if( regex_search( "my_file.cc" , results4 , r4 ) )              // 错误：输入为char*
        cout << results4.str() << endl;
    #endif // NDE_BUG2

    regex r5( "[[:alnum:]]+\\.(cpp|cxx|cc)$" , regex::icase ) ;
    cmatch results5 ;                                               // 将匹配字符数组输入序列
    if( regex_search( "my_file.cc" , results5 , r5 ) )              // 可打印当前匹配
        cout << results5.str() << endl;
    return 0;
}
