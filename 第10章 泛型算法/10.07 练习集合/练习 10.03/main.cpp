// 本程序用于验证读者在练习10.3中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 0 ) << endl;
    return 0;
}
