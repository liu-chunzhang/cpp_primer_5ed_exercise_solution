// 本程序用于验证读者在练习15.5中的想法，并在必要的地方予以说明
#include "Bulk_quote.h"

int main() {
    Bulk_quote item( "978=7-121-15535-2" , 128.00 , 5 , 0.05 ) ;
    cout << item.net_price( 3 ) << endl;
    cout << item.net_price( 6 ) << endl;
    return 0;
}
