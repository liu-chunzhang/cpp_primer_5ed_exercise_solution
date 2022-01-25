#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
    public:
        Bulk_quote() = default;
        Bulk_quote( const string& , double , size_t , double ) ;
        double net_price( size_t ) const override ;
        void debug() override ;

    private:
        size_t min_qty = 0 ;
        double discount = 0.0 ;
};

#endif // BULK_QUOTE_H
