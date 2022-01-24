// 本程序用于验证教材中9.5.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string s1 = "Hello world!" ;
    s1.insert( s1.size() , 5 , '!' ) ;
    cout << s1 << endl;
    s1.erase( s1.size() - 5 , 5 ) ;
    cout << s1 << endl;

    const char *cp = "Stately, plump Buck" ;
    s1.assign( cp , 7 ) ;
    cout << s1 << endl;
    s1.insert( s1.size() , cp + 7 ) ;
    cout << s1 << endl;

    string s2 = "some string" , s3 = "some other string" ;
    s2.insert( 0 , s3 ) ;
    cout << s2 << endl;
    s2.insert( 0 , s3 , 0 , s3.size() ) ;
    cout << s2 << endl;

    string s4( "C++ Primer" ) , s5 = s4 ;
    cout << s4 << "\t" << s5 << endl;
    s4.insert( s4.size() , " 5th Ed." ) ;
    s5.append( " 5th Ed." ) ;
    cout << s4 << "\t" << s5 << endl;

    s4.replace( 11 , 3 , "Fifth" ) ;
    cout << s4 << endl;
    return 0;
}
