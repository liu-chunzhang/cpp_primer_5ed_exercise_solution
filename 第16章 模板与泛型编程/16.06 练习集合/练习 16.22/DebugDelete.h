#ifndef DEBUGDELETE_H
#define DEBUGDELETE_H

#include <iostream>
using namespace std;

struct DebugDelete{
    public:
        DebugDelete( ostream &out = cerr ) : os( out ) { }
        template <typename T> void operator() ( T *p ) const ;
        ~DebugDelete() = default ;

    private:
        ostream &os ;
};

template <typename T>
void DebugDelete::operator() ( T *p ) const {
    cout << "Using function DebugDelete::operator() ( T *p ) " << endl;
    delete p ;
}

#endif // DEBUGDELETE_H
