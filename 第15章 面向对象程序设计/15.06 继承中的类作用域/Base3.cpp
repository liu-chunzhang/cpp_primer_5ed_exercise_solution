#include "Base3.h"

int Base3::fcn() {
    return 0 ;
}

int D31::fcn( int i ){
    return i ;
}

void D31::f2() { }          // �麯�������Ǵ��麯�����������������Ӧ����ʵ����������Ҫ�������

int D32::fcn() {
    return Base3::fcn() ;   // ������������޵ݹ���ã�
}

int D32::fcn( int i ){
    return i ;
}

void D32::f2( ) { }
