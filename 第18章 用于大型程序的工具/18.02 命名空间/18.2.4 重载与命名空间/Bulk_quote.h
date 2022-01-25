#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
    public:
        using Disc_quote::Disc_quote ;
        ~Bulk_quote() = default ;

    public:
        virtual Bulk_quote *clone() const & override ;
        virtual Bulk_quote *clone() && override ;

    public:
        double net_price( size_t cnt ) const override ;
};

namespace libs_R_us {
    void print( int i ) ;
    void print( double d ) ;
}

#endif // BULK_QUOTE_H
