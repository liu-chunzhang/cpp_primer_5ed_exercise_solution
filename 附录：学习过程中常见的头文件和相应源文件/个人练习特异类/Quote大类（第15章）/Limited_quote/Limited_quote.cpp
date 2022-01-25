#include "Limited_quote.h"

Limited_quote::Limited_quote( const string &book , double price , size_t max_qty , double disc ) : Disc_quote( book , price , max_qty , disc ) { }

double Limited_quote::net_price( size_t cnt ) const {
    return ( cnt <= quantity ) ? cnt * ( 1 - discount ) * price : ( quantity * ( 1 - discount ) + ( cnt - quantity ) ) * price ;
}
