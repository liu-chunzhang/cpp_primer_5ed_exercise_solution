#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
    friend istream &operator >> ( istream &in , Bulk_quote &disc_quote ) ;

    public:
        Bulk_quote() = default ;
        using Disc_quote::Disc_quote ;
        virtual ~Bulk_quote() = default ;

    public:
        double net_price( size_t cnt ) const override ;
        virtual Bulk_quote *clone() const & override ;
        virtual Bulk_quote *clone() && override ;
};

#endif // BULK_QUOTE_H
