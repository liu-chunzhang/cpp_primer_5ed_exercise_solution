#include "Pub_Derv.h"

int Pub_Derv::f( ) {
    return prot_mem ;          // ��ȷ���������ܷ���protected��Ա
}

char Pub_Derv::g( ) {
  //return priv_mem ;          // ����private��Ա������������˵���ɷ���
    return 'A' ;
}

int Priv_Derv::f1() const {
    return prot_mem ;          // private��Ӱ��������ķ���Ȩ��
}
