#include "Base3.h"

int Pal::f( Base3 b ) {
    return b.prot_mem ;         // 正确：Pal是Base的友元
}

int Pal::f2( Sneaky3 s ) {
  //return s.j ;                // 错误：Pal不是Sneaky3的友元
    return 3 ;
}

int Pal::f3( Sneaky3 s ) {
    return s.prot_mem ;         // 正确：Pal是Base3的友元
}

int D2::mem( Base3 b ) {
  //return b.prot_mem ;         // 错误：友元关系不能够继承!
    return 3 ;
}
