#ifndef BASE3_H
#define BASE3_H

#include <iostream>
using namespace std;

class Base3{
    public:
        virtual int fcn() ;
};

class D31 : public Base3 {
    public:
        int fcn( int i ) ;       // ���ػ����fcn�����fcn�������麯�����β��б���Base�еĲ�һ�£������̳���Base::fcn()�Ķ��壬ӵ����������Ϊfcn�ĺ���
        virtual void f2() ;     // һ���µ��麯������Base�в�����
};

class D32 : public D31 {
    public:
        int fcn( int i ) ;      // һ�����麯����������D1::fcn( int )
        int fcn() ;             // ������Base���麯��
        void f2() ;             // ������D1���麯��f2
};
#endif // BASE3_H
