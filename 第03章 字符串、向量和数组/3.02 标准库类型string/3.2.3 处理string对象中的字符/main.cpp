// 本程序用于验证教材中3.2.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    /*
    string str( "some string" ) ;                                        // 此处用范围for语句使得每行输出str中的一个字符
    for( char c : str )                                                  // 对于str中的每个字符
        cout << c << endl;                                               // 输出当前字符，后面紧跟一个换行符
    */

    /*
    string s( "Hello world!!!" ) ;
    string::size_type punct_cnt = 0 ;                                    // 此处用decltype(s.size())也可以代替string::size_type类型定义变量类型
    for( auto c : s )                                                    // 此处用auto让编译器判断变量类型，其实就是char
        if( ispunct( c ) )
           ++punct_cnt ;                                                 // 这一句话的意思是，如果这个字符是标点符号，则记录标点符号总数的变量+1
    cout << punct_cnt << " punctuation characters in " << s << endl;
    */

    /*
    string s( "Hello world!!!" ) ;                                       // 想要改写string中对象的值，必须将循环变量定义成引用类型！通过引用修
    for( auto &c : s )                                                   // 改它绑定的字符。
        c = toupper( c ) ;                                               // 注意对s中的每个字符，c是一个引用，因此赋值语句将改变s中字符的值
    cout << s << endl;
    */

    /*
    if( !s.empty() )                                                     // 确保确实可以有字符需要输出
        cout << s[0] << endl;                                            // 输出s的第一个字符
    */

    /*
    string si( "some string" );
    if( !si.empty() )
        si[0] = toupper( si[0] );
    cout << si << endl;

    for( size_t index = 0 ; index != si.size() && !isspace( si[index] ) ; ++index )  // 依次处理s中的字符直至我们处理全部的字符或者遇到一个空白
        si[index] = toupper( si[index] ) ;                                            // 将当前字符全部改为大写形式
    cout << si << endl;
    */

    /*
    const string hexdigits = "0123456789ABCDEF" ;
    cout << "Enter a series of numbers between 0 and 15 separated by spaces. Hit Enter when finished:"  << endl;
    string result ;
    string::size_type n ;
    while( cin >> n )
        if( n < hexdigits.size() )
           result += hexdigits[n] ;
    cout << "Your hex number is:" << result << endl;
    */

    return 0;
}
