// 本程序用于验证读者在练习16.16中的想法，并在必要的地方予以说明
#include <iostream>
#include "Vec.h"
using namespace std;

int main() {
    Vec<string> svec1 , svec2( svec1 ) , svec3 = svec1 ;
    svec1.push_back( "welcome" ) ;
    svec1.push_back( move( "to" ) ) ;
    svec1.emplace_back( 10 , 'c' ) ;
    cout << svec1[2] ;
    return 0;
}
