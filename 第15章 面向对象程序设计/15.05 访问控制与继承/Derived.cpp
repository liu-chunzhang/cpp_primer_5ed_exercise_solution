#include "Derived.h"

int Derived_from_Public::use_base() {
    return prot_mem ;                       // 正确：Base::prot_mem在Pub_Derv中仍然是protected的
}

int Derived_from_Private::use_base() {
  //return prot_mem ;                        // 错误：Base::prot_mem在Priv_Derv中是privated的
    return 1 ;
}
