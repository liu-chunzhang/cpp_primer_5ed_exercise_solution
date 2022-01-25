#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
using namespace std;

template<size_t H,size_t W> class Screen ;                                                    // ���������Ҫ����������/������������Ҫ
template<size_t H,size_t W> istream &operator >> ( istream &in , Screen<H,W> &screen ) ;    // ���������Ҫ����Ϊ��Ҫ��Screen����������Ԫ
template<size_t H,size_t W> ostream &operator << ( ostream &out , Screen<H,W> &screen ) ;

template<size_t H,size_t W>
class Screen {
    friend class Window_mgr ;
    friend istream &operator >> <H,W>( istream &in , Screen<H,W> &screen ) ;
    friend ostream &operator << <H,W>( ostream &out , Screen<H,W> &Screen ) ;

    public:
        Screen() ;
        Screen( char c ) ;
        ~Screen() = default ;

    public:
        char get() const ;                                  // ��ȡ��괦�����ݵĺ���
        char get( size_t r , size_t c ) const ;
        Screen& clear( char c = bkground ) ;                // ��������

    public:
        Screen& move( size_t r , size_t c ) ;
        Screen& set( char c ) ;
        Screen& set( size_t r , size_t c , char s ) ;
        Screen& display( ostream &out ) ;

    private:
        static const char bkground = ' ' ;                  // ������Ĭ�ϱ���Ϊ�գ���' '
        string contents ;
        size_t cursor = 0 ;

    private:
        void do_display( ostream &out ) const ;
};

// ��Ԫ����
template<size_t H,size_t W>
istream &operator >> ( istream &in , Screen<H,W> &screen ) {
    string temp ;
    in >> temp ;
    screen.contents = temp.substr( 0 , H * W ) ;
    return in ;
}

template<size_t H,size_t W>
ostream &operator << ( ostream &out , Screen<H,W> &screen ) {
    screen.do_display( out ) ;
    return out ;
}

// ���캯������������
template<size_t H,size_t W>
Screen<H,W>::Screen() : contents( H * W , ' ' ) { }

template<size_t H,size_t W>
Screen<H,W>::Screen( char c ) : contents( H * W , c ) { }

// �����Ժ���
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
