#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Quote.h"

class Bulk_quote : public Quote {
    public:
        Bulk_quote() = default;
        Bulk_quote( const string &book , double sellingprice , size_t units_sold , double discount ) ;
        ~Bulk_quote() = default ;

    public:
        double net_price( size_t cnt ) const override ;
        void debug() const override ;

    private:
        size_t min_qty = 0 ;
        double discount = 0.0 ;
};

#endif // BULK_QUOTE_H
