#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
    public:
        Bulk_quote() = default;
        using Disc_quote::Disc_quote ;                      // �̳���Disc_quote�Ĺ��캯��
        ~Bulk_quote() = default ;

    public:
        double net_price( size_t cnt ) const override ;
};

#endif // BULK_QUOTE_H
