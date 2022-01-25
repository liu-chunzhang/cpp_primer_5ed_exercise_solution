#include "Book.h"

istream &operator >> ( istream &in , Book &b ) {
    in >> b.Name >> b.ISBN >> b.Price >> b.Author >> b.Publisher ;
    return in ;
}

ostream &operator << ( ostream &out , Book &b ) {
    out << b.Name << " " << b.ISBN << " " << b.Price << " " << b.Author << " " << b.Publisher ;
    return out ;
}

bool operator == ( const Book &lhs , const Book &rhs ) {
    return lhs.ISBN == rhs.ISBN ;
}

bool operator != ( const Book &lhs , const Book &rhs ) {
    return !( lhs == rhs ) ;
}

Book::Book( const string &n , const string &I , double pr , const string &a , const string &p ) : Name( n ) , ISBN( I ) , Price( pr ) , Author( a ) , Publisher( p ) { }

Book::Book( istream &in )  {
    in >> *this ;
}

Book &Book::operator = ( const Book &book ) {
    Name = book.Name ;
    ISBN = book.ISBN ;
    Price = book.Price ;
    Author = book.Author ;
    Publisher = book.Publisher ;
    return *this ;
}

Book &Book::operator = ( Book &&book ) {
    if( this != &book ){
        Name =  std::move( book.Name )  ;
        ISBN = std::move( book.ISBN )  ;
        Price = std::move( book.Price )  ;
        Author = std::move( book.Author )  ;
        Publisher = std::move( book.Publisher )  ;
    }
    return *this ;
}
