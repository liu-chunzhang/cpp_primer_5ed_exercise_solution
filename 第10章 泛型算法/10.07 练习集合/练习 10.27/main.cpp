// 本程序用于验证读者在练习10.27中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 21 , 55 , 55 , 89 } ;
    list<int> ilst ;
    sort( ivec.begin() , ivec.end() ) ;
    unique_copy( ivec.cbegin() , ivec.cend() , back_inserter( ilst ) ) ;
    for( const int i : ilst )
        cout << i << " " ;
    cout << endl;
    return 0;
}

// 需要注意的是，与unique类似，unique_copy也要求是在源容器中独立存放的。因此，若vector未排序且重复元素重复元素没相邻存放，unique_copy就不能够达到
// 预期效果。
