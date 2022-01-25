#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
using namespace std;

class Sales_data{
    friend istream& operator >> ( istream& , Sales_data& ) ;
    friend ostream& operator << ( ostream& , const Sales_data& ) ;
    friend bool operator < ( const Sales_data& , const Sales_data& ) ;
    friend bool operator == ( const Sales_data& , const Sales_data& ) ;

    public:
        Sales_data() = default ;
        Sales_data( const string& book ): bookNo( book ) { }
        Sales_data( istream &is ) { is >> *this ; }
        ~Sales_data() { } ;                                                    // 此处为Sales_data类的合成析构函数
    public:
        Sales_data& operator += ( const Sales_data& );
        string isbn() const { return bookNo; }
    private:
        string bookNo;
        unsigned units_sold = 0 ;
        double revenue = 0.0 ;
};

#endif // SALES_DATA_H
