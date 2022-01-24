// 本程序用于验证读者在练习3.44中的想法，并在必要的地方予以说明：使用传统for循环和使用下标运算符，且使用类型别名来代替控制变量的类型
#include <iostream>                                             // 由于变量就是最简单的整型变量（内置变量），无需修改，不做调整
using namespace std;

int main() {
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;
    for( int i = 0 ; i != 3 ; ++i ){
        for( int j = 0 ; j != 4; ++j )
            cout << ia[i][j] << " " ;
        cout << endl;
    }
    return 0;
}
