// 本程序用于验证读者在练习16.4中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename Iterator , typename T>
Iterator find( Iterator beg , Iterator ter , const T &value ) ;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 } ;
    cout << ( ( find( ivec.cbegin() , ivec.cend() , 8 ) != ivec.cend() ) ? "ivec里含有元素8." : "ivec里不含有元素8." ) << endl;
    list<string> slst = { "welcome" , "to" , "C++" , "family" , "!" } ;
    cout << ( ( find( slst.cbegin() , slst.cend() , "Hello" ) != slst.cend() ) ? "slst里含有Hello." : "slst里不含hello." ) << endl;
    return 0;
}

template<typename Iterator , typename T> Iterator find( Iterator beg , Iterator ter , const T &value ) {
    while( beg != ter && *beg != value )
        ++beg ;
    return beg ;
}
