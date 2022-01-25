#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
using namespace std;

class Quote{
    friend ostream& operator << ( ostream& , Quote& ) ;

    public:
        Quote() = default ;
        Quote( const string& , double ) ;
        Quote( const Quote& ) ;
        Quote( Quote&& ) ;
        Quote& operator = ( const Quote& ) = default ;
        Quote& operator = ( Quote&& ) = default ;
        virtual ~Quote()  ;
        string isbn() const ;
        virtual double net_price( size_t n ) const ;
        virtual void debug() ;

    private:
        string bookNo ;

    protected:
        double price = 0.0 ;

};

#endif // QUOTE_H
