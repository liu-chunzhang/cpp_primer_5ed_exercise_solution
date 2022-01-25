#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <vector>
using namespace::std ;

class Screen{
    friend class Window_mgr ;                                             // �ظ�������Ԫ��û�������

    public:
        typedef string::size_type pos ;                                 // ʹ�����ͱ����ȼ۵�����һ����������
        using Action = Screen&( Screen::* )() ;
        enum Directions { HOME , FORWARD , BACK , UP , DOWN } ;

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
        Screen &move( Directions cm ) ;
        void someMembers() const ;
        Screen &set( char c ) ;
        Screen &set( pos ht , pos wd , char c ) ;
        Screen &display( ostream &os ) ;
        const Screen &display( ostream &os ) const ;
        pos get_cursor() const ;
        static const string Screen::*data() ;

    public:
        Screen& home() ;                                                    // ��ʱ��������Щ�����������������
        Screen& forward() ;
        Screen& back() ;
        Screen& up() ;
        Screen& down() ;

    private:
        pos cursor = 0 ;                                                   // cursor�������ڳ�ʼֵ��ʼ��Ϊ0
        pos height = 0 ;
        pos width = 0 ;
        string contents ;
        mutable size_t access_ctr ;                                       // ��ʹ��һ��const������Ҳ�ܱ��޸�
        void do_display( ostream &os ) const ;

    private:
        static Action Menu[] ;
};

class Window_mgr{
    public:
        using ScreenIndex = vector<Screen>::size_type ;

    public:
        void clear( ScreenIndex ) ;
        ScreenIndex addScreen( const Screen &screen ) ;

    private:
        vector<Screen> screens{ Screen( 24 , 80 , ' ' ) } ;
};

#endif // SCREEN_H
