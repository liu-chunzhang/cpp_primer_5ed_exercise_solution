#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
using namespace std;

class Quote{
    public:
        Quote() = default ;
        Quote( const string& book , double sales_price ) : bookNo( book ) , price( sales_price ) { }
        string isbn() const ;
        virtual double net_price( size_t n ) const ;
        virtual void debug() ;                                                                          // 新添加的debug函数
        virtual ~Quote() = default ;

    private:
        string bookNo ;

    protected:
        double price = 0.0 ;

};

#endif // QUOTE_H
