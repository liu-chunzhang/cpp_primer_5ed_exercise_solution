// 本程序用于验证读者在练习7.53中的想法，并在必要的地方予以说明
#include "Debug.h"

int main() {
    constexpr Debug io_sub( false , true , true , false ) ;
    if( io_sub.any() )
        cerr << "print appropriate error message" << endl;
    constexpr Debug prod( false ) ;
    if( prod.any() )
        cerr << "print an error message" << endl;
    return 0;
}
