#ifndef LIMITED_QUOTE_H
#define LIMITED_QUOTE_H

#include "Quote.h"

class Limited_quote : public Quote {
    public:
        Limited_quote() = default ;
        Limited_quote( const string &book , double price , size_t cnt , double disc ) ;

    public:
        double net_price( size_t cnt ) const override ;

    private:
        size_t max_pty ;
        double discount ;
};

#endif // LIMITED_QUOTE_H
