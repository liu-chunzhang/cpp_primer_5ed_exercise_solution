// ������������֤��������ϰ13.18�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Employee.h"

void f( Employee &s ) ;

int main() {
    Employee a( "�����" ) , b = a , c ;
    c = b ;
    f( a ) ;
    f( b ) ;
    f( c ) ;
    return 0;
}

void f( Employee &s ){
    cout << s.getName() << ":" << s.getIDnumber() << endl;
}
