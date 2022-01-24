// 本程序用于验证读者在练习10.2中的想法，并在必要的地方予以说明
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<string> slst ;
    string i , j ;
    cout << "请输入您想检索存在的子串：" ;
    cin >> j ;
    cout << "请输入您的待检索列：" ;
    while( cin >> i )
        slst.push_back( i ) ;
    cout << "您想检索存在的数字一共出现了" << count( slst.cbegin() , slst.cend() , j ) << "次。" << endl;
    return 0;
}
