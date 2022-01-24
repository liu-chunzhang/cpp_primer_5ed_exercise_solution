// 本程序用于验证教材中7.3.2节内容的可靠性，并提供感性认知
#include "Screen.h"

int main() {
    Screen myScreen1 ;
    myScreen1.move( 4 , 0 ).set( '#' ) ;

    Screen myScreen2( 5u , 3u ) ;
    const Screen blank( 5u , 3u  , '#') ;
    myScreen2.set( '#' ).display( cout ) ;
    cout << endl;
    blank.display( cout ) ;
    return 0;
}
