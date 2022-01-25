#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee{
    public:
        Employee() = default ;                 // 默认构造函数
        Employee( const string &s ) ;          // 接受一个表示雇员姓名的string的构造函数，通过递增static变量生成唯一的证号

    public:                                    // 此函数组用于进行调试，就本题答案的正确性而言是不必要的
        string getName() const ;               // 获取Employee类的name变量
        unsigned getIDnumber() const ;         // 获取Employee类的IDnumber变量
    private:
        static unsigned IDgenerator ;

    private:
        string name ;                           // 此变量储存雇员的姓名
        unsigned IDnumber ;                     // 此变量储存唯一的雇员证号
};

#endif // EMPLOYEE_H
