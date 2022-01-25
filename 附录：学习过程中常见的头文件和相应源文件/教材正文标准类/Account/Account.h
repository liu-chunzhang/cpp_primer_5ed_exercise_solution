#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account {
    public:
        void calculate() { amount += amount * interestRate ; }      // 成员函数不用通过作用域运算符就能直接使用静态成员
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

