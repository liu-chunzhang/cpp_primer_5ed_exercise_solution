#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

class Account{
    public:
        Account() = default ;
        Account( double Amount ) ;
        Account( const string &name , const string &idnumber , double Amount ) ;

    public:
        void calculate() ;
        static double rate() ;
        static void rate( double newRate ) ;

    private:
        string Name ;                         // ��������������ݱ��뼰������Ͷ���������أ����ܶ���Ϊ��̬�ģ���������������ȶ���ͳһ�ģ�
        string IDnumber ;                     // ���Զ���Ϊ��̬��Ա��
        double amount = 0.0 ;
        static double intestingRate ;
};

#endif // ACCOUNT_H
