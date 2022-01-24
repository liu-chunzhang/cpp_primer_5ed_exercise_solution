#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
    friend istream &operator >> ( istream &in , Person &per ) ;      // 读取操作
    friend ostream &operator << ( ostream &out , Person &per ) ;      // 打印操作

    public:
        Person() = default ;
        Person( const string &name , const string &address ) ;
        Person( istream &in ) ;
        ~Person() = default ;

    public:
        string findName() const ;
        string findAddress() const ;

    private:
        string Name ;
        string Address ;
};

#endif // PERSON_H
