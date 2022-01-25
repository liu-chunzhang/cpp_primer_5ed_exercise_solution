#include "Employee.h"

unsigned Employee::IDgenerator = 1 ;
// 构造函数于与析构函数
Employee::Employee( const string &s ) : name( s ) { IDnumber = IDgenerator++ ; }

Employee::Employee( const Employee &employee ) : name( employee.name ) {
    IDnumber = IDgenerator++ ;
}

Employee &Employee::operator = ( const Employee &employee ) {
    name = employee.name ;
    IDnumber = IDgenerator++ ;
    return *this ;
}
// 功能性函数
string Employee::getName() const{
    return this->name ;
}

unsigned Employee::getIDnumber() const{
    return this->IDnumber ;
}
