#include "Bulk_quote.h"

double Bulk_quote::net_price( size_t cnt ) const {
    return ( cnt >= quantity ) ? cnt * ( 1 - discount ) * price : cnt * price ;
}
