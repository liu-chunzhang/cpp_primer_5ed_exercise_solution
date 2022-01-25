#include "Pub_Derv.h"

int Pub_Derv::f( ) {
    return prot_mem ;          // 正确：派生类能访问protected成员
}

char Pub_Derv::g( ) {
  //return priv_mem ;          // 错误：private成员对于派生类来说不可访问
    return 'A' ;
}

int Priv_Derv::f1() const {
    return prot_mem ;          // private不影响派生类的访问权限
}
