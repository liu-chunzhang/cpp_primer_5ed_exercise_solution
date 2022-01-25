// 本程序用于验证读者在练习15.30中的想法，并在必要的地方予以说明
#include "Bulk_quote.h"
#include "Basket.h"                    // 我原本想用智能指针取代使用动态普通指针的，但是做不到
#include <fstream>

int main() {
    ifstream in( "data.txt" ) ;
    Basket bsk ;
    Bulk_quote bulk_quote ;
    while( in >> bulk_quote )
        bsk.add_item( bulk_quote ) ;
    cout << bsk.read( 1 ) << endl;
    cout << bsk.read( 4 ) << endl;
    return 0;
}
