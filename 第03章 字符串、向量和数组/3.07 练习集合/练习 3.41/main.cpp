// 本程序用于验证读者在练习3.41中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[10] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<int> vint( begin( a ) , end( a ) );
    for( int i : vint )
        cout << i << " ";                          // 这个打印语句用于说明程序运行的正确性
    return 0;
}
