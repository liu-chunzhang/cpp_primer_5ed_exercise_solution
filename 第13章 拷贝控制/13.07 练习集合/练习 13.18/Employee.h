#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee{
    public:
        Employee() = default ;                 // Ĭ�Ϲ��캯��
        Employee( const string &s ) ;          // ����һ����ʾ��Ա������string�Ĺ��캯����ͨ������static��������Ψһ��֤��

    public:                                    // �˺��������ڽ��е��ԣ��ͱ���𰸵���ȷ�Զ����ǲ���Ҫ��
        string getName() const ;               // ��ȡEmployee���name����
        unsigned getIDnumber() const ;         // ��ȡEmployee���IDnumber����
    private:
        static unsigned IDgenerator ;

    private:
        string name ;                           // �˱��������Ա������
        unsigned IDnumber ;                     // �˱�������Ψһ�Ĺ�Ա֤��
};

#endif // EMPLOYEE_H
