#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
    friend istream &operator >> ( istream &in , Person &per ) ;      // ��ȡ����
    friend ostream &operator << ( ostream &out , Person &per ) ;      // ��ӡ����

    public:
        string findName() const ;
        string findAddress() const ;

    private:
        string Name ;
        string Address ;
};

#endif // PERSON_H
