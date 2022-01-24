// 本程序用于验证教材中6.4.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

void print( const string &s ) ;
void print( double d ) ;
void print( int i ) ;

int main() {

    return 0;
}

string read(){
    string s = "Hello" ;
    return s ;
}

void print( const string &s ) {
    cout << s ;
}

void print( double d ){
    cout << d - static_cast<int>( d ) ;
}

void print( int i ){
    cout << i ;
}

/*
void fooBar( int ival ) {
    bool read = false ;
    string s = read() ;                       // 错误：read是一个bool值，而非是函数。在C++语言中，名字查找在类型检查之前！
    void print(int) ;                         // 不好的习惯：通常来说，在局部作用域中声明函数是不好的选择。新作用域：隐藏了之前的print
    print( "Value: " ) ;                      // 错误：print(const string &)被隐藏掉了
    print( ival ) ;                           // 正确：当前print(int)可见
    print( 3.14 ) ;                           // 正确：调用print(int)，但是print(double)被隐藏了
}
*/

void fooBar2( int ival ) {
    print( "Value: " ) ;
    print( ival ) ;
    print( 3.14 ) ;
}
