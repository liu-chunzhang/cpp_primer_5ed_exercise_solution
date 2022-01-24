// 本程序用于验证读者在练习3.35中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int a[10] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    for( int *p = a ; p != end( a ) ; ++p )
        *p = 0 ;                                    // 用循环变量控制指针移动，当然也可以选择其他方法，用指针加法控制移动
    for( int i : a )
        cout << i << " ";
    return 0;
}
