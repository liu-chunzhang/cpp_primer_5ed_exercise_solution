#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
using namespace std;

class Quote{
    public:
        Quote() = default ;                                     // 对成员依次进行默认初始化
        Quote( const string &book , double sales_price ) ;
        Quote( const Quote &quote ) = default ;                 // 对成员依次拷贝
        Quote& operator = ( const Quote &quote ) = default ;   // 拷贝复制
        Quote( Quote &&quote ) = default ;                      // 对成员依次拷贝
        Quote& operator = ( Quote &&quote ) = default ;        // 移动复制
        virtual ~Quote() = default ;

    public:
        string isbn() const ;
        virtual double net_price( size_t n ) const ;

    protected:
        double price = 0.0 ;

    private:
        string bookNo ;
};

#endif // QUOTE_H
