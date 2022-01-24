#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
    public:
        string findName() const ;
        string findAddress() const ;

    private:
        string Name ;
        string Address ;
};

#endif // PERSON_H
