#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account {
    public:
        void calculate() { amount += amount * interestRate ; }      // ��Ա��������ͨ�����������������ֱ��ʹ�þ�̬��Ա
        static double rate() ;
        static void rate( double newRate ) ;

    private:
        string owner ;
        double amount = 0.0 ;
        static double interestRate ;
        static double initRate() ;
};

#endif // ACCOUNT_H

