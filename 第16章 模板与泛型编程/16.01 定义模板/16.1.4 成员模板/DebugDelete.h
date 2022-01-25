#ifndef DEBUGDELETE_H
#define DEBUGDELETE_H

#include <iostream>
using namespace std;

class DebugDelete{                                                  // 函数对象类：对给定指针执行delete
    public:
        DebugDelete( ostream &s = cerr ) : os( s ) { }
        template <typename T> void operator()( T *p ) const ;      // 与任何函数模板相同，T的类型由编译器推断
        ~DebugDelete() = default ;

    private:
        ostream &os ;
};

template <typename T>
void DebugDelete::operator()( T *p ) const {
    os << "delete unique_ptr" << endl;
    delete p ;
}

#endif // DEBUGDELETE_H
