#include "Disc_quote.h"

Disc_quote::Disc_quote( const string& s , double d1 , size_t n , double d2 ): Quote( s , d1 ) , quantity( n ) , discount( d2 ) { }

Disc_quote::~Disc_quote(){

}

pair<size_t,double> Disc_quote::discount_policy() const {
    return { quantity , discount } ;
}
