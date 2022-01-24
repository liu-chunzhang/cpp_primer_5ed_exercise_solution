#include "Screen.h"

Screen::pos verify( Screen::pos a ){
    return a ;
}

void Screen::setHeight( pos var ){
    height = verify( var );
}
