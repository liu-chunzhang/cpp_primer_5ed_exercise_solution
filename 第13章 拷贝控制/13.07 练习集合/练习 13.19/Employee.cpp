#include "Employee.h"

unsigned Employee::IDgenerator = 1 ;
// ���캯��������������
Employee::Employee( const string &s ) : name( s ) { IDnumber = IDgenerator++ ; }

Employee::Employee( const Employee &employee ) : name( employee.name ) {
    IDnumber = IDgenerator++ ;
}

Employee &Employee::operator = ( const Employee &employee ) {
    name = employee.name ;
    IDnumber = IDgenerator++ ;
    return *this ;
}
// �����Ժ���
string Employee::getName() const{
    return this->name ;
}

unsigned Employee::getIDnumber() const{
    return this->IDnumber ;
}
