#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
using namespace std;

class Quote{
    public:
        Quote() = default ;
        Quote( const string &s , double d ) ;
        virtual ~Quote() = default;

    public:
        string isbn() const ;
        virtual double net_price( size_t n ) const ;

    protected:
        double price = 0.0 ;

    private:
        string bookNo ;
};



#endif // QUOTE_H
