#include "PrintString2.h"

PrintString2::PrintString2( istream &in2 ) : in( in2 ) { }

string PrintString2::operator () (){
    string str ;
    return getline( in , str ) ? str : "" ;
}
