#include "Disc_quote.h"

Disc_quote::Disc_quote( const string &book , double price , size_t qty , double disc ) : Quote( book , price ) , quantity( qty ) , discount( disc ) { }
