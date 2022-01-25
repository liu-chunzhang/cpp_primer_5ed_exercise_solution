#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
using namespace std;

class Quote{
    public:
        Quote() = default ;
        Quote( const string &book , double sales_price ) ;
        Quote( const Quote &quote ) ;
        Quote &operator = ( const Quote &quote ) ;
        virtual ~Quote() = default ;

    public:
        string isbn() const ;
        virtual double net_price( size_t n ) const ;
        virtual void debug() const ;
        virtual Quote *clone() const & ;
        virtual Quote *clone() && ;

    protected:
        double price = 0.0 ;

    private:
        string bookNo ;
};

#endif // QUOTE_H
