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

// 显然Employee类需要定义它的拷贝控制成员，因为构造函数应该通过递增static数据成员来生成唯一的编号，而并非简单地拷贝一切非static的成员到新对象中
