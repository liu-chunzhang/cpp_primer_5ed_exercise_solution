// 本程序用于验证读者在练习9.11中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec1 ;
    vector<int> ivec2( ivec1 ) ;
    vector<int> ivec3 = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<double> ivec4( ivec3.cbegin() + 2 , ivec3.cend() - 1 ) ;
    vector<int> ivec5( 10 ) ;
    vector<int> ivec6( 10 , 42 ) ;
    cout << ivec1.size() << " " << ivec1.capacity() << endl;
    cout << ivec2.size() << " " << ivec2.capacity() << endl;
    cout << ivec3.size() << " " << ivec3.capacity() << endl;
    cout << ivec4.size() << " " << ivec4.capacity() << endl;
    cout << ivec5.size() << " " << ivec5.capacity() << endl;
    cout << ivec6.size() << " " << ivec6.capacity() << endl;
    for( const int i : ivec3 )
        cout << i << " " ;
    cout << endl;
    for( const int i : ivec4 )
        cout << i << " " ;
    cout << endl;
    for( const int i : ivec5 )
        cout << i << " " ;
    cout << endl;
    for( const int i : ivec6 )
        cout << i << " " ;
    return 0;
}
