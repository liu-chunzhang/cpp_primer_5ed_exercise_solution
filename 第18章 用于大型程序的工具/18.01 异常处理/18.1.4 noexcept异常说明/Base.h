#ifndef BASE_H
#define BASE_H

using namespace std;

struct Base{
    virtual double f1( double ) noexcept ;
    virtual int f2() noexcept( false ) ;
    virtual void f3() ;
};

struct Derived : Base {
  //double f1( double ) ;                       // 错误：与Base::f1承诺不会抛出异常
    int f2() noexcept( false ) ;              // 正确：与Base::f2的异常说明一致
    void f3() noexcept override ;             // 正确：Derived的f3做了更严格的说明，这是允许的
};

double Base::f1( double d ) noexcept {
    return d ;
}

int Base::f2() noexcept( false ) {
    return 0 ;
}

void Base::f3() { }

#endif // BASE_H
