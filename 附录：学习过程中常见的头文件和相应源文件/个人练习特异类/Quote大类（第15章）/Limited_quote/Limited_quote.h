#ifndef Limited_quote_H
#define Limited_quote_H

#include "Disc_quote.h"

class Limited_quote : public Disc_quote {
    public:
        Limited_quote() = default;
        Limited_quote( const string &book , double price , size_t max_qty , double disc ) ;

    public:
        double net_price( size_t cnt ) const override ;
};

#endif // Limited_quote_H
