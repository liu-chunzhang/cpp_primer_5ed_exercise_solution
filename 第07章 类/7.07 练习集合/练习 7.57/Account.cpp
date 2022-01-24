#include "Account.h"

double Account::intestingRate = 0.05 ;

Account::Account( double Amount ) : amount( Amount ) { }

Account::Account( const string &name , const string &idnumber , double Amount ) : Name( name ) , IDnumber( idnumber ) , amount( Amount ) { }

void Account::calculate() {
    amount += amount * intestingRate ;
}

double Account::rate() {
    return intestingRate ;
}

void Account::rate( double newRate ) {
    intestingRate = newRate ;
}
