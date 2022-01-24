#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
using namespace::std ;

int height ;

class Screen{
    public:
        typedef string::size_type pos ;
        void setHeight( pos ) ;

    private:
        pos cursor = 0 ;
        pos height = 0 , width = 0 ;
};

#endif // SCREEN_H
