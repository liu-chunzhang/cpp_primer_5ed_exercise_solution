// 本程序用于验证教材中19.2.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <typeinfo>
#include "Base.h"
using std::cout ;
using std::endl ;

int main() {
    Base b( 3 ) , *bp = &b ;
    if( Derived *dp = dynamic_cast<Derived*>( bp ) )
        cout << dp->getval() << endl;
    else
        cout << "turn wrong!" << endl;

    Derived d( 4 ) , *dp2 = &d ;
    if( Derived *dp3 = dynamic_cast<Derived*>( dp2 ) )
        cout << dp3->getval() << endl;
    else
        cout << "turn wrong!" << endl;

    Derived2 d2( 4 ) , *dp4 = &d2 ;
    if( Derived *dp5 = dynamic_cast<Derived*>( dp4 ) )
        cout << dp5->getval() << endl;
    else
        cout << "turn wrong!" << endl;

    Base *b2 = new Derived2( 7 ) ;
    if( Derived *dp6 = dynamic_cast<Derived*>( b2 ) )
        cout << dp6->getval() << endl;
    else
        cout << "turn wrong!" << endl;

    A *pa = new C ;
    B *pb = dynamic_cast<B*>( pa ) ;

    B *pb2 = new B ;
    C *pc = dynamic_cast<C*>( pb ) ;

    A *pa2 = new D ;
    B *pb3 = dynamic_cast<B*>( pa2 ) ;

    return 0;
}
