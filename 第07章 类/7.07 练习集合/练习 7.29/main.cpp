// 本程序用于验证读者在练习7.29中的想法，并在必要的地方予以说明
#include "Screen.h"

int main() {
    Screen myscreen( 5 , 5 , 'X' ) ;
    myscreen.move( 4 , 0 ).set( '#' ).display( cout ) ;
    cout << endl;
    myscreen.display( cout ) ;
    cout << endl;
    return 0;
}
