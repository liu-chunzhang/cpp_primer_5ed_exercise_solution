// ������������֤��������ϰ18.17�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#define NDE_BUG4

namespace Exercise {
    int ivar = 0 ;
    double dvar = 0 ;
    const int limit = 1000 ;
}

int ivar = 0 ;

#ifdef NDE_BUG1
using Exercise::ivar ;
using Exercise::dvar ;
using Exercise::limit ;
#endif // NDE_BUG1

#ifdef NDE_BUG3
using namespace Exercise ;
#endif // NDE_BUG3

void manip() ;

int main() {
    manip() ;
    return 0;
}

void manip() {
    #ifdef NDE_BUG2
    using Exercise::ivar ;
    using Exercise::dvar ;
    using Exercise::limit ;
    #endif // NDE_BUG2

    #ifdef NDE_BUG4
    using namespace Exercise ;
    #endif // NDE_BUG4

    double dvar = 0 ;
    int iobj = limit + 1 ;
    ++ivar ;
    ++::ivar ;
}
