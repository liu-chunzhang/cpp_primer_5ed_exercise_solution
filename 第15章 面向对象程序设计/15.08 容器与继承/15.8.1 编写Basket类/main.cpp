// 本程序用于验证读者在练习15.8.1中的想法，并在必要的地方予以说明
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
