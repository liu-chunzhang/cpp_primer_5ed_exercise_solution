// ������������֤��������ϰ15.20�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Base.h"

int main() {
    Pub_Derv  d1 ;
    Prot_Derv d2 ;
    Prot_Derv d3 ;
    Derived_from_Public     dd1 ;
    Derived_from_Protected  dd2 ;
    Derived_from_Privated   dd3 ;

    Base *p ;          // �˽ںϷ��Է�������ϰ15.18
    p = &d1 ;
  //p = &d2 ;
  //p = &d3 ;
    p = &dd1 ;
  //p = &dd2 ;
  //p = &dd3 ;
  //p2 = &d1 ;

    Base base ;             // �˽ںϷ��Է�������ϰ15.19
    d1.memfcn( base ) ;
    d2.memfcn( base ) ;
    d3.memfcn( base ) ;
    dd1.memfcn( base ) ;
    dd2.memfcn( base ) ;
  //dd3.memfcn( base ) ;
    return 0;
}
