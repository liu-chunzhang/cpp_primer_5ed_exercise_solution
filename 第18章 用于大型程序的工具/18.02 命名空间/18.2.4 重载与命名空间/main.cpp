// ������������֤�̲���18.2.4�����ݵĿɿ��ԣ����ṩ������֪
#include "Bulk_quote.h"

namespace libs_R_us {                       // �����ռ�libs_R_us�Ķ������Bulk_quote������ļ���
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
    print( "Value: " ) ;            // ����ȫ�ֺ���print( const string &s )
    print( ival ) ;                 // ����libs_R_us::print( int )
}
