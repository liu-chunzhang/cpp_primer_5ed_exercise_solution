#ifndef NUMBERED_H
#define NUMBERED_H

#include <iostream>
using namespace std ;

class numbered{
    public:
        numbered() ;

    #ifndef NDEBUG
    public:
        numbered( numbered &n ) { mysn = seq++ ; }
        numbered& operator = ( const numbered &n ) ;
    #endif // NDEBUG

    public:
        int mysn ;

    private:
        static int seq ;                                // 赋予初值得在main.cpp里去做
};

#endif // NUMBERED_H
