#include "PrintString.h"

PrintString::PrintString( ostream &o , char c ) : os( o ) , sep( c ) { }

void PrintString::operator()( const string &s ) const {
    os << s << sep ;
}
