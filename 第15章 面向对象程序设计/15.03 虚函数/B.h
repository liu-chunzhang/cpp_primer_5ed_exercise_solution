#ifndef B_H
#define B_H

struct B{
    B();
    virtual ~B();
    virtual void f1( int ) const ;
    virtual void f2() ;
    void f3() ;
};

struct D1 : B {
    void f1( int ) const override ;     // 正确：f1与基类B中的f1匹配
  //void f2( int ) override ;             // 错误：B没有形如f2(int)的函数
  //void f3() override ;                  // 错误：f3不是虚函数
  //void f4() override ;                  // 错误：B没有名为f4的函数
};

struct D2 : B {
    void f1( int ) const final ;        // 不允许后续的其他类覆盖f1(int)
};

struct D3 : D2 {
    void f2() ;                          // 正确：覆盖从间接基类B继承而来的f2
  //void f1(int) const ;                 // 错误：D2已经将f2声明为final
};

#endif // B_H
