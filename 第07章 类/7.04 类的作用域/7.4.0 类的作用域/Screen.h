#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <vector>
using namespace::std ;

class Screen{
    friend class Window_mgr ;                                             // �ظ�������Ԫ��û�������

    public:
        typedef string::size_type pos ;                                 // ʹ�����ͱ����ȼ۵�����һ����������

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
        Screen &display( ostream &os ) ;
        const Screen &display( ostream &os ) const ;
        pos findcursor() const { return cursor ; }

    private:
        pos cursor = 0 ;                                                   // cursor�������ڳ�ʼֵ��ʼ��Ϊ0
        pos height = 0 , width = 0 ;
        string contents ;
        mutable size_t access_ctr ;                                       // ��ʹ��һ��const������Ҳ�ܱ��޸�
        void do_display( ostream &os ) const { os << contents ; }
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
