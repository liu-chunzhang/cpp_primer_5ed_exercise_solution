// 本程序用于验证教材中9.2.7节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include "Sales_data.h"
using namespace std;

int main() {
    vector<int> v1 = { 1 , 3 , 5 , 7 , 9 , 12 } ;
    vector<int> v2 = { 1 , 3 , 9 } ;
    vector<int> v3 = { 1 , 3 , 5 , 7 } ;
    vector<int> v4 = { 1 , 3 , 5 , 7 , 9 , 12 } ;
    if( v1 < v2 )
        cout << " v1 < v2 " << endl;    // true：v1和v2在元素[2]处不同，且v1[2] < v2[2]
    if( v1 < v3 )
        cout << " v1 < v3 " << endl;    // false：所有元素都相等，但是v3的元素更少。
    if( v1 == v4 )
        cout << " v1 == v4" << endl;    // true：每个元素都相等，且大小相同
    if( v1 == v2 )
        cout << " v1 == v2 " << endl;   // false：v2的元素数目小于v1

    vector<Sales_data> storeA , storeB ;
    if( storeA < storeB )
        cout << " storeA < storeB " << endl;    // 错误：Sales_data没有定义<运算符
    return 0;
}
