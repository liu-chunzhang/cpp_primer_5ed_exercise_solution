// 本程序用于验证教材中9.5.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string name( "AnnaBelle" ) ;
    string::size_type pos1 = name.find( "Anna" ) ;
    cout << pos1 << endl;

    string lowercase( "annabelle" ) ;
    pos1 = lowercase.find("Anna") ;                       // pos1 == npos
    cout << pos1 << endl;

    string numbers( "0123456789" ) , name2( "r2d2" ) ;
    string::size_type pos2 = name2.find_first_of( numbers ) ;
    cout << pos2 << endl;

    string dept( "03714p3" ) ;
    string::size_type pos = dept.find_first_not_of( numbers ) ;
    cout << pos << endl;

    string::size_type pos3 = 0 ;
    while( ( pos3 = name.find_first_of( numbers , pos3 ) ) != string::npos ){
        cout << "found number at index: " << pos3 << " element is " << name[pos3] << endl;
        ++pos3 ;
    }

    string river( "Mississippi" ) ;
    string::size_type first_pos = river.find( "is" ) ;
    string::size_type last_pos = river.rfind( "is" ) ;
    cout << first_pos << " " << last_pos << endl;
    return 0;
}
