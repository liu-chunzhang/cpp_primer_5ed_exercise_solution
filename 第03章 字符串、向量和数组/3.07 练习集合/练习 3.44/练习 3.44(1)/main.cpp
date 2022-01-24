// 本程序用于验证读者在练习3.44中的想法，并在必要的地方予以说明：使用范围for循环管理迭代过程，并应用类型别名代替循环控制变量的类型
#include <iostream>
using namespace std;
using intarr4 = int[4];                              // 使用intarr4代表维度是4的整型数组类型，第三问亦同

int main() {
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;
    for( intarr4 &i : ia ){
        for( int j : i )
            cout << j << " " ;
        cout << endl;
    }
    return 0;
}
