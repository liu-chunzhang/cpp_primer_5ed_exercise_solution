#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>

namespace NS{
    class Quote{
        friend void display( const Quote &lhs ) ;

        public:
            Quote() = default ;
            Quote( const std::string &book , double sales_price ) ;
            virtual ~Quote() = default ;

        public:
            std::string isbn() const ;
            virtual double net_price( size_t n ) const ;
            virtual Quote *clone() const & ;
            virtual Quote *clone() && ;

        protected:
            double price = 0.0 ;

        private:
            std::string bookNo ;
    };
}

#endif // QUOTE_H
