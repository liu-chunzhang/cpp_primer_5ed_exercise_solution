// 本程序用于验证读者在练习6.30中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

bool str_subrange( const string &str1 , const string &str2 ) ;

int main() {
    return 0 ;
}

bool str_subrange( const string &str1 , const string &str2 ) {                   // 因为含有类型不正确的返回值，所以这段编码无法通过编译
    if( str1.size() == str2.size() )
        return str1 == str2 ;
    size_t size0 = ( str1.size() < str2.size() ) ? str1.size() : str2.size() ;   // size_t类型可以用在非容器类型中，但是size_type只能用在容器
    for( size_t i = 0 ; i != size0 ; ++i )                                        // 类型里，虽然都可以用于表示strign对象的大小
        if( str1[i] != str2[i] )
            return ;                                                              // 没有返回值，编译器将报告这一错误
}                                         // 控制流可能尚未返回任何值就结束了函数的执行。实际上，编译器确实没有检查出这个错误
