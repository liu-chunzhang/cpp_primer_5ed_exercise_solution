#include "Chapter6.h"

int factorial ( int i ) {
    int factorial = 1 ;
    if( i <= 0 )
        return 1 ;
    while( i > 1 )
        factorial *= i-- ;
    return factorial ;
}
