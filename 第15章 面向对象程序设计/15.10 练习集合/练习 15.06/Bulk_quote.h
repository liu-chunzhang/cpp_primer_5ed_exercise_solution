#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Quote.h"

class Bulk_quote : public Quote {
    public:
        Bulk_quote() = default;
        Bulk_quote( const string &s , double d1 , size_t n , double d2 ) ;

    public:
        double net_price( size_t cnt ) const override ;

    private:
        size_t min_qty = 0 ;
        double discount = 0.0 ;
};

#endif // BULK_QUOTE_H
