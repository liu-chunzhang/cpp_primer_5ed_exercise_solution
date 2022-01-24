// 本程序用于验证教材中8.2.1节内容的可靠性，并提供感性认知
#include <fstream>
#include "Sales_data.h"

void process( istream &in ) ;

int main( int argc , char *argv[] ) {
    ifstream fstrm ;
    fstrm.open( "data.txt" ) ;
    cout << fstrm.is_open() << endl;
    fstrm.close() ;
    cout << fstrm.is_open() << endl;

    ifstream input( argv[1] ) ;
    ofstream output( argv[2] ) ;
    Sales_data total ;
    if( input >> total ){
        Sales_data trans ;
        while( input >> trans )
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else {
                output << total << endl;
                total = trans ;
            }
        output << total ;
    }
    else
        cerr << "No data?!" << endl;

    for( char **p = argv + 1 ; p != argv + argc ; ++p ){
        ifstream input( *p ) ;
        if( input ) {
            process( input ) ;
        }
        else
            cerr << "couldn't open:" + string( *p ) ;
    }
    return 0;
}

void process( istream &in ) { }
