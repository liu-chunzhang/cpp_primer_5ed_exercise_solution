#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account {
    public:
        void calculate() { amount += amount * interestRate ; }      // ��Ա��������ͨ�����������������ֱ��ʹ�þ�̬��Ա
        static double rate() { return interestRate ; }
        static void rate( double newRate ) { interestRate = 0.05 ; }

    private:
        string owner ;
        double amount = 0.0 ;
        static double interestRate ;
        static double initRate() { return 0.05 ; }
};

double Account::interestRate = initRate();

#endif // ACCOUNT_H

