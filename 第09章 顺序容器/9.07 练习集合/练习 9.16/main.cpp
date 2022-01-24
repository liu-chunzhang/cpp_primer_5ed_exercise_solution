// 本程序用于验证读者在练习9.16中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <list>
using namespace std;

bool compare( const list<int>& ilst , const vector<int>& ivec ) ;

int main() {
    list<int> ilst = { 0 , 1 , 2 , 3 , 4 , 5 } ;
    vector<int> ivec1 = { 0 , 1 , 2 , 3 , 4 , 5 } ;
    vector<int> ivec2 = { 0 , 1 , 2 , 3 } ;
    cout << ( compare( ilst , ivec1 ) ? "ilst == ivec1" : "ilst != ivec1" ) << endl;
    cout << ( compare( ilst , ivec2 ) ? "ilst == ivec2" : "ilst != ivec2" ) << endl;
    return 0;
}

bool compare( const list<int>& ilst , const vector<int>& ivec ){
    if( ilst.size() == ivec.size() )
        return equal( ivec.cbegin() , ivec.cend() , ilst.cbegin() ) ;
   return false ;
}
