#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H

#include "Quote.h"

class Disc_quote : public Quote {
    public:
        Disc_quote() = default ;
        Disc_quote( const string& , double , size_t , double ) ;
        virtual ~Disc_quote();
        double net_price( size_t ) const = 0 ;
        pair<size_t,double> discount_policy() const ;

    protected:
        size_t quantity = 0 ;
        double discount = 0.0 ;
};

#endif // DISC_QUOTE_H
