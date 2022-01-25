#ifndef DEBUGDELETE_H
#define DEBUGDELETE_H

#include <iostream>
using namespace std;

struct DebugDelete{
    public:
        template <typename T> void operator() ( T *p ) const ;
};

template <typename T>
void DebugDelete::operator() ( T *p ) const {
    delete p ;
}

#endif // DEBUGDELETE_H
