// 本程序用于验证读者在练习15.11中的想法，并在必要的地方予以说明
#include "Bulk_quote.h"

int main() {
    Quote item( "978-7-121-15535-2" , 128.00 ) ;
    Bulk_quote item2( "978-7-121-20934-5" , 65.00 , 5 , 0.05 ) ;
    item.debug() ;
    item2.debug() ;
    return 0;
}
