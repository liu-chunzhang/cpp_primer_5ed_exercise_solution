#include "Sneaky.h"

void clobber( Sneaky &s ){
    s.j = s.prot_mem = 0 ;    // ��ȷ��clobber�ܹ�����Sneaky�����private��protected��Ա
}

void clobber( Base &b ){
  //b.prot_mem = 0 ;          // ����clobber���ܷ���Base��protected��Ա
}

