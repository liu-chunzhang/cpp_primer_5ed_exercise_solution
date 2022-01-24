// 本程序用于验证教材中6.3.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

char &get_val( string &str , string::size_type ix ) ;
string make_plural( size_t ctr , const string &word , const string &ending ) ;
const string &shorterString( const string &s1 , const string &s2 ) ;
int factorial( int val ) ;

int main() {
    string s( "a value" ) ;
    cout << s << endl;
    get_val( s , 0 ) = 'A' ;                  // 返回值是个引用，所以和其他左值一样也能出现在赋值运算符的左侧。
    cout << s << endl;
  //shorterString( "hi" , "bye" ) = "X" ;     // 错误：返回值是个常量

    int i = 0 ;
    if( i )
        return EXIT_SUCCESS ;
    else
        return EXIT_FAILURE ;
}

/*
bool str_subrange( const string &str1 , const string &str2 ){                    // 因为含有类型不正确的返回值，所以这段编码无法通过编译
    if( str1.size() == str2.size() )
        return str1 == str2 ;
    size_t size0 = ( str1.size() < str2.size() ) ? str1.size() : str2.size() ;   // size_t类型可以用在非容器类型中，但是size_type只能用在
    for( size_t i = 0 ; i != size0 ; ++i )                                       // 容器类型里，虽然都可以用于表示strign对象的大小
        if( str1[i] != str2[i] )
            return ;                                                             // 没有返回值，编译器将报告这一错误
}                                                                                // 控制流可能尚未返回任何值就结束了函数的执行。实际上，
                                                                                 // 编译器确实没有检查出这个错误
*/

string make_plural( size_t ctr , const string &word , const string &ending ) {
    return  ctr > 1  ? word + ending : word ;
}

const string &shorterString( const string &s1 , const string &s2 ) {
    return s1.size() <= s2.size() ? s1 : s2 ;
}

/*
const string &manip(){
    string ret ;
    if( !ret.empty() )
        return ret ;                                                             // 错误：返回局部对象的引用！
    else
        return "Empty" ;                                                         // 错误："empty"是一个局部临时量
}
*/

char &get_val( string &str , string::size_type ix ) {                                // get_val假定索引值是有效的
    return str[ix] ;
}

/*
vector<string> process() {
    string excepted , actual ;
    if( excepted.empty() )
        return { } ;
    else if( excepted == actual )
        return { "functionX" , "okay" } ;
    else
        return { "functionX" , excepted , actual } ;
}
*/

int factorial( int val ) {
    if( val > 1 )
        return factorial( val - 1 ) * val ;
    return 1 ;
}
