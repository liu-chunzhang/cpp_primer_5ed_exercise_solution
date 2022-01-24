// 本程序用于验证读者在练习10.1中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> ivec ;
    int i , j = 0;
    cout << "请输入您想检索存在的数字：" ;
    cin >> j ;
    cout << "请输入您的待检索列：" ;
    while( cin >> i )
        ivec.push_back( i ) ;
    cout << "您想检索存在的数字一共出现了" << count( ivec.cbegin() , ivec.cend() , j ) << "次。" << endl;
    return 0;
}
