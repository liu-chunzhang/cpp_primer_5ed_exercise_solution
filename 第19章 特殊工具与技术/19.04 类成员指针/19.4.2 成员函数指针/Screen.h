#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <vector>
using namespace::std ;

class Screen{
    friend class Window_mgr ;                                             // 重复申明友元是没有问题的

    public:
        typedef string::size_type pos ;                                 // 使用类型别名等价地声明一个类型名字
        using Action = Screen&( Screen::* )() ;
        enum Directions { HOME , FORWARD , BACK , UP , DOWN } ;

    public:
        Screen() = default ;                                              // 因为Screen有另一个构造函数，所以本函数是必须的
        Screen( pos ht , pos wd ) ;
        Screen( pos ht , pos wd , char c ) ;
        Screen( const Screen &screen ) ;                                  // 三五法则
        Screen& operator = ( const Screen &screen ) ;
        ~Screen() = default ;

    public:
        char get() const ;                                               // 读取光标处的字符
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
        Screen& home() ;                                                    // 临时定义了这些函数，定义是随便编的
        Screen& forward() ;
        Screen& back() ;
        Screen& up() ;
        Screen& down() ;

    private:
        pos cursor = 0 ;                                                   // cursor被其类内初始值初始化为0
        pos height = 0 ;
        pos width = 0 ;
        string contents ;
        mutable size_t access_ctr ;                                       // 即使在一个const对象内也能被修改
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
