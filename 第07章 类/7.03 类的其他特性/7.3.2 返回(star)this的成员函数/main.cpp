// ������������֤�̲���7.3.2�����ݵĿɿ��ԣ����ṩ������֪
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
