#include "Base.h"

Base::Base() : mem( 0 ) { }

Derived::Derived( int i ) : mem( i ) { }        // ��i��ʼ��Derived::mem��Base::mem����Ĭ�ϳ�ʼ��

int Derived::get_mem() {
    return mem ;
}

int Derived::get_base_mem() {
    return Base::mem ;                          // ���������������ʹ��һ�������صĻ����Ա
}
