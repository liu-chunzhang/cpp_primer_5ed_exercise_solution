// ������������֤��������ϰ19.12�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Screen.h"

int main() {
    Screen screen( 80 , 24 , 'A' ) ;
    screen.move( 20 , 4 ) ;
    const Screen::pos Screen::*pdata = Screen::posdata() ;
    cout << screen.*pdata << endl;
    return 0;
}
