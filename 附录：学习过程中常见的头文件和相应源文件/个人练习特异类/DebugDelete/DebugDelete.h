#ifndef DEBUGDELETE_H
#define DEBUGDELETE_H

#include <iostream>
using namespace std;

struct DebugDelete{
    public:
        DebugDelete( ostream &out = cerr ) ;
        template <typename T> void operator() ( T *p ) const ;
        ~DebugDelete() = default ;

    private:
        ostream &os ;
};

DebugDelete::DebugDelete( ostream &out ) : os( out ) { }

template <typename T>
void DebugDelete::operator() ( T *p ) const {
    delete p ;
}

#endif // DEBUGDELETE_H
