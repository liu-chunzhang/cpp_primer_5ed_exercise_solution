// 本程序用于验证读者在练习16.14中的想法，并在必要的地方予以说明
#include "Screen.h"

int main() {
    Screen<5,3> myScreen ;
    myScreen.display( cout ) ;
    cout << "|||" << endl;
    myScreen.move( 4 , 0 ).set( '#' ).display( cout ) ;
    cout << "|||" << endl;
    cout << endl;

    Screen<5,6> nextScreen( 'X' ) ;
    nextScreen.move( 4 , 0 ).set( '#' ).display( cout ) ;
    cout << endl;
    nextScreen.display( cout ) ;
    cout << endl;

    Screen<5,3> blank ;
    myScreen.set( '?' ).display( cout ) ;
    cout << endl;
    blank.display( cout ) ;
    cout << endl;

    myScreen.clear( 'z' ).display( cout ) ;
    cout << endl;

    Screen<5,3> temp = myScreen.move( 4 , 2 ) ;                 // 由于temp类型为Screen<5,3>而非Screen<5,3>&
    temp.set( '#' ) ;                                           // 从而只有返回值被拷贝，改变temp不影响myScreen
    myScreen.display( cout ) ;
    cout << endl;
    temp.display( cout ) ;
    cout << endl;
    return 0;
}
