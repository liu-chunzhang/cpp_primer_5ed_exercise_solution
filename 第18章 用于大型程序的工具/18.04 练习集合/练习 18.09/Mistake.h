#ifndef MISTAKE_H
#define MISTAKE_H

#include <iostream>
using namespace std;

class out_of_stock : public runtime_error {
    public:
        explicit out_of_stock( const string& ) ;
};

class isbn_mismatch : public logic_error {
    public:
        explicit isbn_mismatch( const string &s , const string &lhs , const string &rhs ) ;

    public:
        const string getleft() const ;
        const string getright() const ;

    private:
        const string left ;
        const string right ;
};

#endif // MISTAKE_H
