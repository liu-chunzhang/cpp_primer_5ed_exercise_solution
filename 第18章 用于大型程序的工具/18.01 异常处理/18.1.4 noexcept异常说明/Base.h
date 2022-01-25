#ifndef BASE_H
#define BASE_H

using namespace std;

struct Base{
    virtual double f1( double ) noexcept ;
    virtual int f2() noexcept( false ) ;
    virtual void f3() ;
};

struct Derived : Base {
  //double f1( double ) ;                       // ������Base::f1��ŵ�����׳��쳣
    int f2() noexcept( false ) ;              // ��ȷ����Base::f2���쳣˵��һ��
    void f3() noexcept override ;             // ��ȷ��Derived��f3���˸��ϸ��˵�������������
};

double Base::f1( double d ) noexcept {
    return d ;
}

int Base::f2() noexcept( false ) {
    return 0 ;
}

void Base::f3() { }

#endif // BASE_H
