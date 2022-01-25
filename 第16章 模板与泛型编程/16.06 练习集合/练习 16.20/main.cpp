// 本程序用于验证读者在练习16.20中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

template <typename Container> void print( const Container &container ) ;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    print( ivec ) ;
    return 0;
}

template <typename Container>
void print( const Container &container ) {
    for( typename Container::const_iterator citer = container.cbegin() ; citer != container.cend() ; ++citer )
        cout << *citer  << " " ;
}
