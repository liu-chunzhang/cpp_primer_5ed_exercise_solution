// 本程序用于验证读者在练习14.45中的想法，并在必要的地方予以说明
#include "Sales_data.h"

int main() {
    Sales_data data( "978-7-121-15535-2" , 15 , 128.00 , 108.00 ) ;
    cout << static_cast<string>( data ) << ": " << static_cast<double>( data ) << endl;
    return 0;
}
