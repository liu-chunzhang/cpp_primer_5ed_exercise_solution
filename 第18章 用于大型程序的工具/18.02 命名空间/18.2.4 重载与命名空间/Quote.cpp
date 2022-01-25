#include "Quote.h"

namespace NS{

    void display( const Quote &lhs ) {
        std::cout << lhs.bookNo << " " << lhs.price << std::endl;
    }

// 构造函数与析构函数
    Quote::Quote( const std::string &book , double sales_price ) : price( sales_price ) , bookNo( book ) { }

// 功能性函数
    std::string Quote::isbn() const {
        return bookNo ;
    }

    double Quote::net_price( size_t n ) const {
        return n * price ;
    }

    Quote *Quote::clone() const & {
        return new Quote( *this ) ;
    }

    Quote *Quote::clone() && {
        return new Quote( std::move( *this ) ) ;
    }
}
