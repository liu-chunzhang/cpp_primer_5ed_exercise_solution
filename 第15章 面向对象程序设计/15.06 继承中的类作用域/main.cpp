// ������������֤�̲���15.6�����ݵĿɿ��ԣ����ṩ������֪
#include "Bulk_quote.h"
#include "Base.h"
#include "Base2.h"
#include "Base3.h"

int main() {
    Bulk_quote bulk ;
    Bulk_quote *bulkP = &bulk ;         // ��̬���ͺͶ�̬����һ��
    Quote *itemP = &bulk ;              // ��̬���ͺͶ�̬���Ͳ�һ��
    bulkP->discount_policy() ;          // ��ȷ��bulkP��������Bulk_quote*
  //itemP->discount_policy() ;          // ����itemP��������Quote*

    Derived d( 42 ) ;
    cout << d.get_mem() << endl;
    cout << d.get_base_mem() << endl;

    Base2 b2 ;
    Derived2 d2 ;
    b2.memfcn() ;                                          // ����Base::memfcn
    d2.memfcn( 10 ) ;                                      // ����Derived::memfcn
  //d2.memfcn() ;                                          // ���󣺲����б�Ϊ�յ�memfcn��������
    d2.Base2::memfcn() ;                                   // ��ȷ������Base2::memfcn

    Base3 bobj ;
    D31 d1obj ;
    D32 d2obj ;

    Base3 *bp1 = &bobj , *bp2 = &d1obj , *bp3 = &d2obj ;
    bp1->fcn() ;                                          // ����ã���������ʱ����Base::fcn
    bp2->fcn() ;                                          // ����ã���������ʱ����Base::fcn
    bp3->fcn() ;                                          // ����ã���������ʱ����D32::fcn

    D31 *d1p = &d1obj ;
    D32 *d2p = &d2obj ;
  //bp2 -> f2() ;                                         // ����Baseû����Ϊf2�ĳ�Ա
    d1p -> f2() ;                                         // ����ã���������ʱ����D1::f2()
    d2p -> f2() ;                                         // ����ã���������ʱ����D2::f2()

    Base3 *p1 = &d2obj ;
    D31 *p2 = &d2obj ;
    D32 *p3 = &d2obj ;
  //p1->fcn( 42 ) ;                                       // ����Base��û�н���һ��int��fcn
    p2->fcn( 42 ) ;                                       // ��̬�󶨣�����D1::fcn( int )
    p3->fcn( 42 ) ;                                       // ��̬�󶨣�����D2::fcn( int )

    return 0;
}
