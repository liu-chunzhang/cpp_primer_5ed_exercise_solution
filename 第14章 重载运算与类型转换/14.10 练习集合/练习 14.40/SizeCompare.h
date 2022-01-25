#ifndef SIZECOMPARE_H
#define SIZECOMPARE_H

#include <iostream>
using namespace std;

class SizeCompare{
    public:
        SizeCompare( size_t n ) : sz( n ) { }
        bool operator() ( const string &a ) const { return a.size() >= sz ; } ;

    private:
        size_t sz ;
};

#endif // SIZECOMPARE_H
