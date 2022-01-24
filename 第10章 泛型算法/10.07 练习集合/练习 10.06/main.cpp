// 本程序用于验证读者在练习10.6中的想法，并在必要的地方予以说明
#include <iterator>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ivec ;
    int val ;
    while( cin >> val )
        ivec.push_back( val ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    fill_n( ivec.begin() , ivec.size() , 0 ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    return 0;
}
