// 本程序用于验证读者在练习3.42中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 14 , 8 , 9 } ;
    int a[ivec.size()] = { 0 } ;
    for( size_t i = 0 ; i != 10 ; ++i )
        a[i] = ivec[i] ;
    for( int i : a )
        cout << i << " ";
    return 0;
}
