// ������������֤��������ϰ7.29�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Screen.h"

int main() {
    Screen myscreen( 5 , 5 , 'X' ) ;
    myscreen.move( 4 , 0 ).set( '#' ).display( cout ) ;
    cout << endl;
    myscreen.display( cout ) ;
    cout << endl;
    return 0;
}
