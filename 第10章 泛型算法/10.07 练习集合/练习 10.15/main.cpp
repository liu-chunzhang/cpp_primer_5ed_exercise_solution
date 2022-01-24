// 本程序用于验证读者在练习10.15中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

void add( int a ) ;

int main() {
    add( 3 );
    return 0;
}

void add( int a ){
    auto sum = [ a ]( int b ) -> int { return a + b ; } ;
    cout << sum( 0 ) ;
}
