#include "Base3.h"

int Pal::f( Base3 b ) {
    return b.prot_mem ;         // ��ȷ��Pal��Base����Ԫ
}

int Pal::f2( Sneaky3 s ) {
  //return s.j ;                // ����Pal����Sneaky3����Ԫ
    return 3 ;
}

int Pal::f3( Sneaky3 s ) {
    return s.prot_mem ;         // ��ȷ��Pal��Base3����Ԫ
}

int D2::mem( Base3 b ) {
  //return b.prot_mem ;         // ������Ԫ��ϵ���ܹ��̳�!
    return 3 ;
}
