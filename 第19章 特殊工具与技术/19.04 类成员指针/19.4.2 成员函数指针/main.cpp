// ������������֤�̲���19.4.2�����ݵĿɿ��ԣ����ṩ������֪
#include "Screen.h"

using Action = char ( Screen::* )( Screen::pos , Screen::pos ) const ;      // Ӧ�ó�Աָ�����������
Action get = &Screen::get ;
Screen &action( Screen &screen , Action action = &Screen::get ) ;

int main() {
    Screen::pos ( Screen::*pmf )() const = Screen::get_cursor ;              // �˴�auto����ıȽϸ���
    char ( Screen::*pmf2 )( Screen::pos , Screen::pos ) const ;
    pmf2 = Screen::get ;                   // ������ʽ��ʹ��ȡ��ַ�����
    pmf2 = &Screen::get ;

    Screen myScreen , *pScreen = &myScreen ;
    char c1 = ( pScreen->*pmf )() ;
    char c2 = ( myScreen.*pmf2 )( 0 , 0 ) ;

    Screen myScreen2 ;
    action( myScreen2 ) ;                   // ʹ��Ĭ��ʵ��
    action( myScreen2 , get ) ;             // ʹ������֮ǰ����ı���get
    action( myScreen2 , &Screen::get ) ;    // ��ʽ�ش����ַ

    Screen myScreen3 ;
    myScreen3.move( Screen::HOME ) ;        // ����myScreen.home
    myScreen3.move( Screen::DOWN ) ;        // ����myScreen.down
    return 0 ;
}

Screen &action( Screen &screen , Action action ) {                              // ��㶨��ģ�������������δ����
    return screen ;
}
