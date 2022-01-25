// 本程序用于验证教材中15.6节内容的可靠性，并提供感性认知
#include "Bulk_quote.h"
#include "Base.h"
#include "Base2.h"
#include "Base3.h"

int main() {
    Bulk_quote bulk ;
    Bulk_quote *bulkP = &bulk ;         // 静态类型和动态类型一致
    Quote *itemP = &bulk ;              // 静态类型和动态类型不一致
    bulkP->discount_policy() ;          // 正确：bulkP的类型是Bulk_quote*
  //itemP->discount_policy() ;          // 错误：itemP的类型是Quote*

    Derived d( 42 ) ;
    cout << d.get_mem() << endl;
    cout << d.get_base_mem() << endl;

    Base2 b2 ;
    Derived2 d2 ;
    b2.memfcn() ;                                          // 调用Base::memfcn
    d2.memfcn( 10 ) ;                                      // 调用Derived::memfcn
  //d2.memfcn() ;                                          // 错误：参数列表为空的memfcn被隐藏了
    d2.Base2::memfcn() ;                                   // 正确：调用Base2::memfcn

    Base3 bobj ;
    D31 d1obj ;
    D32 d2obj ;

    Base3 *bp1 = &bobj , *bp2 = &d1obj , *bp3 = &d2obj ;
    bp1->fcn() ;                                          // 虚调用，将在运行时调用Base::fcn
    bp2->fcn() ;                                          // 虚调用，将在运行时调用Base::fcn
    bp3->fcn() ;                                          // 虚调用，将在运行时调用D32::fcn

    D31 *d1p = &d1obj ;
    D32 *d2p = &d2obj ;
  //bp2 -> f2() ;                                         // 错误：Base没有名为f2的成员
    d1p -> f2() ;                                         // 虚调用，将在运行时调用D1::f2()
    d2p -> f2() ;                                         // 虚调用，将在运行时调用D2::f2()

    Base3 *p1 = &d2obj ;
    D31 *p2 = &d2obj ;
    D32 *p3 = &d2obj ;
  //p1->fcn( 42 ) ;                                       // 错误：Base中没有接受一个int的fcn
    p2->fcn( 42 ) ;                                       // 静态绑定，调用D1::fcn( int )
    p3->fcn( 42 ) ;                                       // 静态绑定，调用D2::fcn( int )

    return 0;
}
