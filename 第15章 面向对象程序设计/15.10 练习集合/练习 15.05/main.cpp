// ������������֤��������ϰ15.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Bulk_quote.h"

int main() {
    Bulk_quote item( "978=7-121-15535-2" , 128.00 , 5 , 0.05 ) ;
    cout << item.net_price( 3 ) << endl;
    cout << item.net_price( 6 ) << endl;
    return 0;
}
