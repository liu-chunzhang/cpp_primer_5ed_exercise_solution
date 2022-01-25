#ifndef PERSONINFO_H
#define PERSONINFO_H

#include <iostream>
#include <vector>
using namespace std;

class PersonInfo {
    public:
        const string& getname() const ;
        vector<string> getPhone() const ;

    public:
        void changeName( const string &s ) ;
        void push_back( const string &s ) ;
        size_t size() const ;

    private:
        string name ;
        vector<string> phone ;
};

#endif // PERSONINFO_H
