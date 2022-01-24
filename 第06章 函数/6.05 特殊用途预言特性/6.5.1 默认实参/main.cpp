// 本程序用于验证教材中6.5.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;
typedef string::size_type sz ;

sz wd = 80 ;
char def = '!' ;
sz ht() ;

string screen( sz ht = 24 , sz wid = 80 , char backgrnd = ' ' ) ;
string screen2( sz = ht() , sz = wd , char = def ) ;
void f2() ;

string window2 = screen2() ;

int main() {
    string window ;
    window = screen() ;                     // 等价于screen( 24 , 80 , ' ' )
    window = screen( 66 ) ;                 // 等价于screen( 66 , 80 , ' ' )
    window = screen( 66 , 256 ) ;           // 等价于screen( 66 , 256 , ' ' )
    window = screen( 66 , 256 , '#' ) ;     // 等价于screen( 66 , 256 , '#' )
    window = screen( , , '?' ) ;            // 错误：只能省略尾部的实参！
    window = screen( '?' ) ;                // 实际调用成了screen( 63 , 80 , ' ' )
    for( size_t i = 0 ; i != 5 ; ++i )
        cout << screen( i ) ;
    return 0;
}

string screen( sz ht , sz wid , char backgrnd ) {
    string s( "Hello world!" ) ;
    return s;
}

sz ht() {
    return 3 ;
}

void f2() {
    def = '*' ;                             // 改变了默认实参的值
    sz wd = 100 ;                           // 隐藏了外层定义的wd，但是没有改变默认值
    window2 = screen2() ;                   // 调用了screen( ht() , 80 , '*' )
}
