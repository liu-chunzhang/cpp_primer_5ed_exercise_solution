#ifndef SIZECOMPARE_H
#define SIZECOMPARE_H

#include <iostream>
using namespace std;

class SizeCompare{                                                                 // ��Ϊ��Ŀ��Ҫ���д����
    public:
        SizeCompare() = delete ;
        SizeCompare( size_t n ) ;
        bool operator() ( const string &s ) const ;
        ~SizeCompare() = default ;

    private:
        size_t sz ;
};

#endif // SIZECOMPARE_H
