// ������������֤��������ϰ16.14�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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

    Screen<5,3> temp = myScreen.move( 4 , 2 ) ;                 // ����temp����ΪScreen<5,3>����Screen<5,3>&
    temp.set( '#' ) ;                                           // �Ӷ�ֻ�з���ֵ���������ı�temp��Ӱ��myScreen
    myScreen.display( cout ) ;
    cout << endl;
    temp.display( cout ) ;
    cout << endl;
    return 0;
}
