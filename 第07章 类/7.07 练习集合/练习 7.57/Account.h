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
        string Name ;                         // 开户人姓名，身份编码及储蓄金额和对象密切相关，不能定义为静态的；但是利率是相对稳定和统一的，
        string IDnumber ;                     // 可以定义为静态成员。
        double amount = 0.0 ;
        static double intestingRate ;
};

#endif // ACCOUNT_H
