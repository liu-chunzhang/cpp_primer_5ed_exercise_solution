#include "Disc_quote.h"

Disc_quote::Disc_quote( const string& s , double d1 , size_t n , double d2 ): Quote( s , d1 ) , quantity( n ) , discount( d2 ) {
    cout << "Disc_quote constructor is running." << endl;
}

Disc_quote::~Disc_quote(){
    cout << "Disc_quote destructor is running." << endl;
}
