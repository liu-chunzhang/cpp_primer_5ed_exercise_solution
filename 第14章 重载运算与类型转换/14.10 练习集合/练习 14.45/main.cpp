// ������������֤��������ϰ14.45�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"

int main() {
    Sales_data data( "978-7-121-15535-2" , 15 , 128.00 , 108.00 ) ;
    cout << static_cast<string>( data ) << ": " << static_cast<double>( data ) << endl;
    return 0;
}
