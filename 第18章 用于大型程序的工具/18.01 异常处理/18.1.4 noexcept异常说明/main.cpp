// ������������֤�̲���18.1.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <memory>
#include "Base.h"

void f() noexcept ;
void recoup( int ) noexcept ;
void alloc( int ) ;

int main(){
  //f() ;

    void ( *pf1 )( int ) noexcept = recoup ;      // recoup��pf1����ŵ�����׳��쳣
    void ( *pf2 )( int ) = recoup ;               // ��ȷ��recoup�����׳��쳣������pf2���ԣ�����֮�以������
    pf1 = alloc ;                                  // ����alloc���ܻ��׳��쳣������pf1�Ѿ�˵�����������׳��쳣����������δ�����κ���ʾ
    pf2 = alloc ;                                  // ��ȷ��pf2��alloc�������׳��쳣

    return 0;
}

void f() noexcept {          // ���ܸú�������Υ�����쳣˵����������Ȼ����˳������ͨ����noexcept��ŵ�����׳��쳣
    throw exception() ;      // Υ�����쳣˵��
}                             // ���������棬�ܻ��׳�����terminate����������һ���ʿ�����ǿͣ����ʹ���֪�����������쳣

void recoup( int i ) noexcept {
    ++i ;
}

void alloc( int i ) {
    i += 2 ;
}
