// 本程序用于验证读者在练习15.20中的想法，并在必要的地方予以说明
#include "Base.h"

int main() {
    Pub_Derv  d1 ;
    Prot_Derv d2 ;
    Prot_Derv d3 ;
    Derived_from_Public     dd1 ;
    Derived_from_Protected  dd2 ;
    Derived_from_Privated   dd3 ;

    Base *p ;          // 此节合法性分析见练习15.18
    p = &d1 ;
  //p = &d2 ;
  //p = &d3 ;
    p = &dd1 ;
  //p = &dd2 ;
  //p = &dd3 ;
  //p2 = &d1 ;

    Base base ;             // 此节合法性分析见练习15.19
    d1.memfcn( base ) ;
    d2.memfcn( base ) ;
    d3.memfcn( base ) ;
    dd1.memfcn( base ) ;
    dd2.memfcn( base ) ;
  //dd3.memfcn( base ) ;
    return 0;
}
