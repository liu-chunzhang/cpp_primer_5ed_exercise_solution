// ������������֤��������ϰ19.13�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"

int main() {
    Sales_data item( "978-7-121-15535-2" , 5 , 128.00 , 108.00 ) ;
    const string Sales_data::*isbn = Sales_data::bookNodata() ;
    cout << item.*isbn << endl;
    return 0;
}
