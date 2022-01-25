// 本程序用于验证读者在练习17.34中的想法，并在必要的地方予以说明
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   cout << "alpha bool values: " << boolalpha << true << " " << false << "\n"
          << "default bool values: " << noboolalpha << true << " " << false <<  endl;
    cout << endl;

    cout << showbase ;
    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "in octal: " << oct << 20 << " " << 1024 << endl;
    cout << "in hex: " << hex << 20 << " " << 1024 << endl;
    cout << "in decimal: " << dec << 20 << " " << 1024 << endl;
    cout << noshowbase << endl;

    cout << showpoint << 3.000 << " " << noshowpoint << 3.000 << endl;
    cout << showpos << 10.0 << " " << noshowpos << 10.0 << endl;
    cout << endl;

    cout << uppercase << "in hex: " << hex << 10 << " " << 1024 << endl;
    cout << nouppercase << "in hex: " << hex << 10 << " " << 1024 << endl;
    cout << dec << endl;

    cout << "default format: " << 100 * sqrt( 2.0 ) << endl;
    cout << "scientific: " << scientific << 100 * sqrt( 2.0 ) << endl;
    cout << "fixed decimal: " << fixed << 100 * sqrt( 2.0 ) << endl;
    cout << "hexadecimal: " << hexfloat << 100 * sqrt( 2.0 ) << endl;
    cout << "use default: " << defaultfloat << 100 * sqrt( 2.0 ) << endl;
    cout << endl;

    int i = -16 ;
    double d = 3.14159 ;
    cout << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" ;
    cout << left << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" << right ;
    cout << right << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" ;
    cout << internal << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n"  ;
    cout << setfill( '#' ) << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" << setfill( ' ' ) ;
    cout << endl;

    cout << unitbuf << 20 << " " << 1024 ;
    cout << flush << ends << endl << nounitbuf;
    return 0;
}
