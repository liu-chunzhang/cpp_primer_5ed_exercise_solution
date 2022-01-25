#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee{
    public:
        Employee() = default ;
        Employee( const string &s ) ;
        Employee( const Employee &employee ) ;
        Employee &operator = ( const Employee &employee ) ;
        ~Employee() = default ;

    public:
        string getName() const ;
        unsigned getIDnumber() const ;
    private:
        static unsigned IDgenerator ;

    private:
        string name ;
        unsigned IDnumber ;
};

#endif // EMPLOYEE_H

// ��ȻEmployee����Ҫ�������Ŀ������Ƴ�Ա����Ϊ���캯��Ӧ��ͨ������static���ݳ�Ա������Ψһ�ı�ţ������Ǽ򵥵ؿ���һ�з�static�ĳ�Ա���¶�����
