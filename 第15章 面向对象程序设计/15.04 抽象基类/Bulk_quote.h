#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
    public:
        Bulk_quote() = default;
        Bulk_quote( const string &book , double sellingprice , size_t qty , double discount ) ;

    public:
        double net_price( size_t cnt ) const override ;
};

#endif // BULK_QUOTE_H
