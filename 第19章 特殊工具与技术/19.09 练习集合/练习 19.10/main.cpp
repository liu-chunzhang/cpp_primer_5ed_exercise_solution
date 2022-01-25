// 本程序用于验证读者在练习19.10中的想法，并在必要的地方予以说明
#include <iostream>
#include "A.h"
using namespace std;

int main() {
    A *pa = new C ;
    cout << typeid( pa ).name() << endl;

    C cobj ;
    A &ra = cobj ;
    cout << typeid( &ra ).name() << endl;

    B *px = new B ;
    A &ra2 = *px ;
    cout << typeid( ra2 ).name() << endl;
    return 0;
}

// 在当前的编译器水平下，得到的结果分别是P1A、P1A和1B
