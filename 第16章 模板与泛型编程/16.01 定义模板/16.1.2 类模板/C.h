#ifndef C_H
#define C_H

#include <iostream>
using namespace std;

template <typename T> class Pal ;

class C {
    friend class Pal<C> ;                           // ����Cʵ������Pal��C��һ����Ԫ����Ҫǰ������
    template <typename T> friend class Pal2 ;     // Pal2������ʵ������C����Ԫ������ǰ������
};

template <typename T> class C2 {                   // C2������һ��һ����ģ��
    friend class Pal<T> ;                           // C2��ÿ��ʵ������ͬʵ������Pal����Ϊ��Ԫ��Pal��ģ������������������֮��
    template <typename X> friend class Pal2 ;     // Pal2������ʵ������C2��ÿ��ʵ������Ԫ������Ҫǰ������
    friend class Pal3 ;                             // Pal3��һ����ģ���࣬����Ҫǰ������
};

#endif // C_H
