#ifndef PRINTSTRING_H
#define PRINTSTRING_H

#include <iostream>
using namespace std;

class PrintString{
    public:
        PrintString( ostream& o = cout , char c = ' ' ) ;
        void operator()( const string &s ) const ;

    private:
        ostream &os ;                                                               // 用于写入的目的流
        char sep ;                                                                 // 用于将不同输出隔开的字符
};

#endif // PRINTSTRING_H
