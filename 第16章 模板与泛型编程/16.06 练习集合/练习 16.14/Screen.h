#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
using namespace std;

template<size_t H,size_t W>
class Screen {
    friend class Window_mgr ;

    public:
        Screen() ;
        Screen( char c ) ;
        ~Screen() = default ;

    public:
        char get() const ;                                  // 获取光标处的内容的函数
        char get( size_t r , size_t c ) const ;
        Screen& clear( char c = bkground ) ;                // 清屏函数

    public:
        Screen& move( size_t r , size_t c ) ;
        Screen& set( char c ) ;
        Screen& set( size_t r , size_t c , char s ) ;
        Screen& display( ostream &out ) ;

    private:
        static const char bkground = ' ' ;                  // 清屏的默认变量为空，即' '
        string contents ;
        size_t cursor = 0 ;

    private:
        void do_display( ostream &out ) const ;
};

// 构造函数与析构函数
template<size_t H,size_t W>
Screen<H,W>::Screen() : contents( H * W , ' ' ) { }

template<size_t H,size_t W>
Screen<H,W>::Screen( char c ) : contents( H * W , c ) { }

// 功能性函数
template<size_t H,size_t W>
char Screen<H,W>::get() const {
    return contents[ cursor ] ;
}

template<size_t H,size_t W>
char Screen<H,W>::get( size_t r , size_t c ) const {
    return contents[ r * W + c ] ;
}

template<size_t H,size_t W>
Screen<H,W>& Screen<H,W>::clear( char c ) {
    contents = string( H * W , c ) ;
    return *this ;
}

template<size_t H,size_t W>
Screen<H,W>& Screen<H,W>::move( size_t r , size_t c ) {
    cursor = r * W + c ;
    return *this ;
}

template<size_t H,size_t W>
Screen<H,W>& Screen<H,W>::set( char c ) {
    contents[ cursor ] = c ;
    return *this ;
}

template<size_t H,size_t W>
Screen<H,W>& Screen<H,W>::set( size_t r , size_t c , char s ) {
    contents[ r * W + c ] = s ;
    return *this ;
}

template<size_t H,size_t W>
Screen<H,W>& Screen<H,W>::display( ostream& out ) {
    do_display( out ) ;
    return *this ;
}

template<size_t H,size_t W>
void Screen<H,W>::do_display( ostream &out ) const {
    for( size_t i = 0 ; i != H ; ++i ){
        for( size_t j = 0 ; j != W ; ++j )
            cout << contents[ i * W + j ] ;
        cout << "|" << endl;
    }
}

#endif // SCREEN_H
