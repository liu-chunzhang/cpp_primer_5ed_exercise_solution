#include "Screen.h"
// Screen��
// ���캯������������
Screen::Screen( pos ht , pos wd ) : height( ht ) , width( wd ) , contents( ht * wd , ' ' ) { }

Screen::Screen( pos ht , pos wd , char c ) : height( ht ) , width( wd ) , contents( ht * wd , c ) { }

Screen::Screen( const Screen &screen ) : cursor( screen.cursor ) , height( screen.height ) , width( screen.width ) , contents( screen.contents ) , access_ctr( 0 ) { }

Screen& Screen::operator = ( const Screen &screen ) {
    cursor = screen.cursor ;
    height = screen.height , width = screen.width ;
    contents = screen.contents ;
    access_ctr = 0 ;
    return *this ;
}

// �����Ժ���
char Screen::get() const {
    return contents[cursor] ;
}

char Screen::get( pos ht , pos wd ) const {
    return contents[ ht * width + wd ] ;
}

Screen &Screen::move( pos r , pos c ){
    cursor = r * width + c ;
    return *this ;
}

void Screen::someMembers() const {
    ++access_ctr ;
}

Screen &Screen::set( char c ) {
    contents[cursor] = c ;
    return *this ;
}

Screen &Screen::set( pos ht , pos wd , char c ) {
    contents[ ht * width + wd ] = c ;
    return *this ;
}

Screen &Screen::display( ostream &os ) {
    do_display( os ) ;
    return *this ;
}

const Screen &Screen::display( ostream &os ) const {
    do_display( os ) ;
    return *this ;
}

// Window_mgr��
void Window_mgr::clear( ScreenIndex index ){
    Screen &s = screens[index] ;
    s.contents = string( s.height * s.width , ' ' ) ;
}

void f() ;
void X::g() { return f() ;}     // f�������Ѿ�������������
void f(){};
void X::h() { return f() ;}
