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
    void f1( int ) const override ;     // ��ȷ��f1�����B�е�f1ƥ��
  //void f2( int ) override ;             // ����Bû������f2(int)�ĺ���
  //void f3() override ;                  // ����f3�����麯��
  //void f4() override ;                  // ����Bû����Ϊf4�ĺ���
};

struct D2 : B {
    void f1( int ) const final ;        // ����������������า��f1(int)
};

struct D3 : D2 {
    void f2() ;                          // ��ȷ�����ǴӼ�ӻ���B�̳ж�����f2
  //void f1(int) const ;                 // ����D2�Ѿ���f2����Ϊfinal
};

#endif // B_H
