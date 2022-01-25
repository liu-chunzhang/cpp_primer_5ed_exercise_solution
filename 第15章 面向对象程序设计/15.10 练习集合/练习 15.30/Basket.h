#ifndef BASKET_H
#define BASKET_H

#include <iostream>
#include <memory>
#include <set>
#include "Bulk_quote.h"
using namespace std;

class Basket{
    public:
        Basket() = default ;
        virtual ~Basket() = default ;

    public:
        double total_receipt( ostream &out ) const ;
        void add_item( const Quote &q ) ;
        void add_item( Quote &&q ) noexcept ;
        double read( size_t n ) ;

    private:
        static bool compare( const shared_ptr<Quote> &lhs , const shared_ptr<Quote> &rhs ) ;

    private:
        multiset<shared_ptr<Quote>,decltype(compare)*> items{ compare } ;
};

#endif // BASKET_H
