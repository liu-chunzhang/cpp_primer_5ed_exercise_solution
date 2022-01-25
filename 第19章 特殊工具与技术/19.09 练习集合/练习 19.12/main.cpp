// 本程序用于验证读者在练习19.12中的想法，并在必要的地方予以说明
#include "Screen.h"

int main() {
    Screen screen( 80 , 24 , 'A' ) ;
    screen.move( 20 , 4 ) ;
    const Screen::pos Screen::*pdata = Screen::posdata() ;
    cout << screen.*pdata << endl;
    return 0;
}
