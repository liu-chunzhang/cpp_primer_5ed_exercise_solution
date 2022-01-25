#include "Employee.h"

unsigned Employee::IDgenerator = 1 ;

Employee::Employee( const string &s ) : name( s ) { IDnumber = IDgenerator++ ; }

string Employee::getName() const{
    return this->name ;
}

unsigned Employee::getIDnumber() const{
    return this->IDnumber ;
}
