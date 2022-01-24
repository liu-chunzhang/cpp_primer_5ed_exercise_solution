// 本程序用于验证读者在练习6.10中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

void exchange2IntValue( int *i , int *j ) ;     // 该函数交换了指针所指的内容

int main() {
    cout << "请输入两个待交换的整数值：" ;
    int i , j ;
    cin >> i >> j ;
    cout << i << " " << j << endl;
    exchange2IntValue( &i , &j ) ;
    cout << i << " " << j << endl;
    return 0;
}

void exchange2IntValue( int *i , int *j ) {
    int temp = *j ;
    *j = *i ;
    *i = temp ;
}
