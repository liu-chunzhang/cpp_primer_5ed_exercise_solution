#include "Derived.h"

void Derived::f( const Derived &derived_obj ) {
    Base::statmem() ;               // ��ȷ��Base������statmem
    Derived::statmem() ;            // ��ȷ��Derived�̳���statmem��������Ķ����ܷ��ʻ����ľ�̬��Ա
    derived_obj.statmem() ;         // ͨ��Derived�������
    statmem() ;                     // ͨ��this�������
}
