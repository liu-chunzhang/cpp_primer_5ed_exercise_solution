#include "Derived.h"

int Derived_from_Public::use_base() {
    return prot_mem ;                       // ��ȷ��Base::prot_mem��Pub_Derv����Ȼ��protected��
}

int Derived_from_Private::use_base() {
  //return prot_mem ;                        // ����Base::prot_mem��Priv_Derv����privated��
    return 1 ;
}
