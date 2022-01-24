#include "Account.h"

double Account::interestRate = initRate();

double Account::rate() {
    return interestRate ;
}

void Account::rate( double newRate ) {
    interestRate = newRate ;
}

double Account::initRate() {
    return 0.05 ;
}
