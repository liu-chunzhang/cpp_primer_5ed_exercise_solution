#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <vector>
using namespace::std ;

class Screen{
    public:
        typedef string::size_type pos ;                                 // ʹ�����ͱ����ȼ۵�����һ����������
        using Get = char ( Screen::* )() const ;
        using Get2 = char ( Screen::* )( pos , pos ) const ;
        using Move = Screen& ( Screen::* )( pos , pos ) ;
        using SomeMembers = void ( Screen::* )() const ;
        using Set = Screen& ( Screen::* )( char ) ;
        using Set2 = Screen& ( Screen::* )( pos , pos , char ) ;
        using Display = void ( Screen::* )( ostream& ) ;
        using Display2 = void ( Screen::* )( ostream& ) ;
        using Findcursor = pos ( Screen::* )() const ;

    public:
        Screen() = default ;                                              // ��ΪScreen����һ�����캯�������Ա������Ǳ����
        Screen( pos ht , pos wd ) ;
        Screen( pos ht , pos wd , char c ) ;
        Screen( const Screen &screen ) ;                                  // ���巨��
        Screen& operator = ( const Screen &screen ) ;
        ~Screen() = default ;

    public:
        char get() const ;                                               // ��ȡ��괦���ַ�
        char get( pos ht , pos wd ) const ;
        Screen &move( pos r , pos c ) ;
        void someMembers() const ;
        Screen &set( char c ) ;
        Screen &set( pos ht , pos wd , char c ) ;
        void display( ostream &os ) ;
        void display( ostream &os ) const ;
        pos findcursor() const ;

    private:
        pos cursor = 0 ;                                                   // cursor�������ڳ�ʼֵ��ʼ��Ϊ0
        pos height = 0 , width = 0 ;
        string contents ;
        mutable size_t access_ctr ;                                       // ��ʹ��һ��const������Ҳ�ܱ��޸�
        void do_display( ostream &os ) const ;
};

class Window_mgr{
    private:
        vector<Screen> screens{ Screen( 24 , 80 , ' ' ) } ;
};

#endif // SCREEN_H
