// ������������֤��������ϰ15.8.1�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Basket.h"
#include "Bulk_quote.h"

int main() {
    Basket bsk ;
    bsk.add_item( Quote( "123" , 45 ) ) ;
    bsk.add_item( Quote( "123" , 45 ) ) ;
    bsk.add_item( Bulk_quote( "345" , 45 , 3 , 0.15 ) ) ;
    bsk.add_item( Quote( "123" , 45 ) ) ;
    bsk.add_item( Bulk_quote( "345" , 45 , 3 , 0.15 ) ) ;
    bsk.add_item( Bulk_quote( "345" , 45 , 3 , 0.15 ) ) ;
    bsk.add_item( Bulk_quote( "345" , 45 , 3 , 0.15 ) ) ;
    bsk.add_item( Bulk_quote( "345" , 45 , 3 , 0.15 ) ) ;
    bsk.total_receipt( cout ) ;
    return 0;
}
