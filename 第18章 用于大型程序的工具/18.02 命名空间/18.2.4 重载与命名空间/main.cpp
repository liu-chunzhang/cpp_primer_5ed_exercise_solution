// 本程序用于验证教材中18.2.4节内容的可靠性，并提供感性认知
#include "Bulk_quote.h"

namespace libs_R_us {                       // 命名空间libs_R_us的定义放在Bulk_quote的相关文件中
    extern void print( int i ) ;
    extern void print( double d ) ;
}

void print( const std::string &s ) ;

using namespace libs_R_us ;
void fooBar( int ival ) ;

int main() {
    Bulk_quote book( "978-7-121-15535-2" , 128.00 , 5 , 0.15 ) ;
    display( book ) ;

    fooBar( 3 ) ;
    return 0;
}

void print( const std::string &s ) {
    std::cout << s << std::endl;
}

void fooBar( int ival ) {
    print( "Value: " ) ;            // 调用全局函数print( const string &s )
    print( ival ) ;                 // 调用libs_R_us::print( int )
}
