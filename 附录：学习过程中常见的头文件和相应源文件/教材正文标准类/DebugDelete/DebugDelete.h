#ifndef DEBUGDELETE_H
#define DEBUGDELETE_H

#include <iostream>
using namespace std;

class DebugDelete{                                                  // ���������ࣺ�Ը���ָ��ִ��delete
    public:
        DebugDelete( ostream &s = cerr ) : os( s ) { }
        template <typename T> void operator()( T *p ) const ;      // ���κκ���ģ����ͬ��T�������ɱ������ƶ�
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
