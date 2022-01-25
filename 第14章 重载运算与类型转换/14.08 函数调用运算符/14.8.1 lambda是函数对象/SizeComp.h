#ifndef SIZECOMP_H
#define SIZECOMP_H

#include <iostream>
using namespace std;

class SizeComp{
    public:
        SizeComp() = delete ;
        SizeComp( size_t n ) ;
        bool operator() ( const string &s ) const ;
        ~SizeComp() = default ;

    private:
        size_t sz ;                                     // 该数据成员对应通过值捕获的变量
};

#endif // SIZECOMP_H
