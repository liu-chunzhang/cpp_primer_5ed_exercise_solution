// 本程序用于验证读者在练习3.43中的想法，并在必要的地方予以说明：使用范围for循环管理迭代过程
#include <iostream>
using namespace std;

int main() {
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;
    for( int (&i)[4] : ia ){
        for( int j : i )
            cout << j << " " ;
        cout << endl;
    }
    return 0;
}
