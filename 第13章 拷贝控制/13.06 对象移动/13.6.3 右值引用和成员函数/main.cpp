// 本程序用于验证教材中13.6.3节内容的可靠性，并提供感性认知
#include "Foo.h"
#include "StrVec.h"

int main() {
    StrVec Svec ;
    string s = "some string or another" ;
    Svec.push_back( s ) ;                                  // 变量是左值，调用push_back( const string& )
    Svec.push_back( "done" ) ;                             // 临时string是右值，调用push_back( string&& )

    string s1 = "a value" , s2 = "another" ;
    string::size_type n = ( s1 + s2 ).find( 'h' ) ;
    cout << n ;
    s1 + s2 = "wow!" ;

    Foo i , j ;                                             // i和j是左值
    i = j ;                                                 // 正确：i是左值
    retFoo() = j ;                                          // 正确：retFoo()返回一个左值
    retVal() = j ;                                          // 错误：retVal()返回一个右值
    i = retVal() ;                                          // 正确：我们可以将一个右值作为赋值操作的右侧运算对象
    return 0;
}
