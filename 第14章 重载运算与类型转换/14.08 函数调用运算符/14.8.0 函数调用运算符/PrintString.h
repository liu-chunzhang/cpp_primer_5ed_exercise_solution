#ifndef PRINTSTRING_H
#define PRINTSTRING_H

#include <iostream>
using namespace std;

class PrintString{
    public:
        PrintString( ostream& o = cout , char c = ' ' ) ;
        void operator()( const string &s ) const ;

    private:
        ostream &os ;                                                               // ����д���Ŀ����
        char sep ;                                                                 // ���ڽ���ͬ����������ַ�
};

#endif // PRINTSTRING_H
