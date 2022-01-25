// 本程序用于验证读者在练习19.13中的想法，并在必要的地方予以说明
#include "Sales_data.h"

int main() {
    Sales_data item( "978-7-121-15535-2" , 5 , 128.00 , 108.00 ) ;
    const string Sales_data::*isbn = Sales_data::bookNodata() ;
    cout << item.*isbn << endl;
    return 0;
}
