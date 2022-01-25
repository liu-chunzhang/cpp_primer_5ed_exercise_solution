// 本程序用于验证读者在练习13.18中的想法，并在必要的地方予以说明
#include "Employee.h"

void f( Employee &s ) ;

int main() {
    Employee a( "诸葛亮" ) , b = a , c ;
    c = b ;
    f( a ) ;
    f( b ) ;
    f( c ) ;
    return 0;
}

void f( Employee &s ){
    cout << s.getName() << ":" << s.getIDnumber() << endl;
}
