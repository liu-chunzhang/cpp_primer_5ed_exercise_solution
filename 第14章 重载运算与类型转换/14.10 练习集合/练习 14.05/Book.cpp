#include "Book.h"

istream &operator >> ( istream &in , Book &b ) {
    in >> b.Name >> b.ISBN >> b.Price >> b.Author >> b.Publisher ;
    return in ;
}

ostream &operator << ( ostream &out , Book &b ) {
    out << b.Name << " " << b.ISBN << " " << b.Price << " " << b.Author << " " << b.Publisher ;
    return out ;
}

Book::Book( const string &n , const string &I , double pr , const string &a , const string &p ) : Name( n ) , ISBN( I ) , Price( pr ) , Author( a ) , Publisher( p ) { }

Book::Book( istream &in )  {
    in >> *this ;
}
