// 本程序用于验证读者在练习14.49中的想法，并在必要的地方予以说明
#include "Book.h"

int main() {
    Book cpp_primer5ed( "C++ Primer（第5版）" , "978-7-121-15535-2" , 128.00 , "王刚、杨巨峰" , "电子工业出版社" ) , nullbook ;
    if( static_cast<bool>( cpp_primer5ed ) )
        cout << cpp_primer5ed << endl;
    if( !static_cast<bool>( nullbook ) )
        cout << nullbook << endl;
    return 0;
}
