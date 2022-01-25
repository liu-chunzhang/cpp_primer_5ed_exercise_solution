// 本程序用于验证读者在练习13.8中的想法，并在必要的地方予以说明
#include "HasPtr.h"

int main() {
    HasPtr h1( "hello" , 6 ) , h2 ;
    h2 = h1 ;
    h2 = "world" ;
    return 0;
}
