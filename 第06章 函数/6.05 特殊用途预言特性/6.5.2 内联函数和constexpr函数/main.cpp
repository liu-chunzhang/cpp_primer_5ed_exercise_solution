// 本程序用于验证教材中6.5.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <ctime>
using namespace std;

inline const string &shorterString( const string &s1 , const string &s2 ) ;
const string &shorterString2( const string &s1 , const string &s2 ) ;

constexpr int new_sz() { return 42 ; }
constexpr size_t scale( size_t cnt ) { return new_sz() * cnt ; }


int main() {
    clock_t start1 , finish1 , start2 , finish2 ;
    start1 = clock() ;
    for( int i = 0 ; i != 100000 ; ++i )
        cout << shorterString( "Hello world!" , "hiya!" ) << endl;
    finish1 = clock() ;
    start2 = clock() ;
    for( int i = 0 ; i != 100000 ; ++i )
        cout << shorterString2( "Hello world!" , "hiya!" ) << endl;
    finish2 = clock() ;
    cout << finish1 - start1 << "/" << CLOCKS_PER_SEC << " (s) " << endl;
    cout << finish2 - start2 << "/" << CLOCKS_PER_SEC << " (s) " << endl;    // 这个测试结果表明，内联函数的使用还是得非常谨慎的，使用不当容易拖垮效率

    constexpr int foo = new_sz() ;

    int arr[scale( 2 )] ;       // 正确：scale(2)是常量表达式
    int i = 2 ;                 // i不是一个常量表达式
    int a2[scale( i )] ;        // 错误：scale(i)不是一个常量表达式。constexpr不一定返回常量表达式！
    return 0;
}

inline const string &shorterString( const string &s1 , const string &s2 ) {
    return ( s1.size() <= s2.size() ) ? s1 : s2 ;
}

const string &shorterString2( const string &s1 , const string &s2 ) {
    return ( s1.size() <= s2.size() ) ? s1 : s2 ;
}
