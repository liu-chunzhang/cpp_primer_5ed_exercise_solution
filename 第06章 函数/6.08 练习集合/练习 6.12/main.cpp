// 本程序用于验证读者在练习6.12中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

void exchange2IntValues( int &i , int &j ) ;

int main() {
    int i , j ;
    cout << "请输入两个待交换的整数：" << endl;
    cin >> i >> j ;
    exchange2IntValues( i , j ) ;
    cout << "交换后的两个整数值为" << i << " " << j << endl;
    return 0;
}

void exchange2IntValues( int &i , int &j ) {                        // 就达到交换两个整数这样简单的目的而言，相比于使用指针，使用引用交换变量的
    int temp = i ;                                                   // 内容从形式上来看更简单一点，无须额外声明指针变量，也避免了拷贝指针的值。
    i = j ;
    j = temp ;
}
