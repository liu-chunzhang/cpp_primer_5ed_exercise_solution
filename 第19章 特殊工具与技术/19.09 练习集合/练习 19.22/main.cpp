// ������������֤��������ϰ19.22�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Token.h"

int main() {
    Sales_data item( "978-7-121-15535-2" , 5 , 128.00 , 108.00 ) ;
    Token t1( item ) ;
    t1 = "hello" ;
    cout << t1 << endl;
    t1 = 3 ;
    cout << t1 << endl;
    t1 = item ;
    cout << t1 << endl;
    t1 = 'c' ;
    cout << t1 << endl;
    t1 = 3.14 ;
    cout << t1 << endl;
    Token t2( 7 ) ;
    t1 = t2 ;
    cout << t1 << endl;
    return 0;
}
