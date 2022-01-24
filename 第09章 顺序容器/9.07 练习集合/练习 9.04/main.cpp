// 本程序用于验证读者在练习9.4中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

bool find( vector<int>::const_iterator cbeg , vector<int>::const_iterator cter , int target ) ;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<int>::const_iterator cbeg = ivec.cbegin() , cter = ivec.cend() ;
    cout << boolalpha << find( cbeg , cter , 3 ) << noboolalpha << endl;
    return 0;
}

bool find( vector<int>::const_iterator cbeg , vector<int>::const_iterator cter , int target ){
    while( cbeg != cter )
        if( *cbeg++ == target )
            return true ;
    return false ;
}
