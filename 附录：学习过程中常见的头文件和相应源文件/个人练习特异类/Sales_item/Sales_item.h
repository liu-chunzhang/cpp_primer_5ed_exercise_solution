#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace::std ;

class Sales_item{
    friend istream& operator >> ( istream& , Sales_item& );
    friend ostream& operator << ( ostream& , const Sales_item& );
    friend bool operator < ( const Sales_item& , const Sales_item& ) ;
    friend bool operator == ( const Sales_item& , const Sales_item& ) ;

    public:
        Sales_item() = default;
        Sales_item( const string& book ): bookNo( book ) { }
        Sales_item( istream& is ) { is >> *this ; }
    public:
        Sales_item& operator += (const Sales_item&);
        string isbn() const { return bookNo; }
        double avg_price() const;

    private:
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

#endif
