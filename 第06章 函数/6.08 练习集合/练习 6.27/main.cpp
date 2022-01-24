// 本程序用于验证读者在练习6.27中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    initializer_list<unsigned> ulst = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    unsigned sum = 0 ;
    for( const int j : ulst )
        sum += j ;
    cout << sum << endl;
    return 0;
}
