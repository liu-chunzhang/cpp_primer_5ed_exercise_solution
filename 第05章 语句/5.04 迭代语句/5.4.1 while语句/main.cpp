// 本程序用于验证教材中5.4.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec ;
    int i ;
    while( cin >> i )
        ivec.push_back( i ) ;
    vector<int>::const_iterator beg = ivec.cbegin() ;
    while( beg != ivec.cend() && *beg >= 0 )
        ++beg ;
    if( beg == ivec.cend() )
        cout << "您输入的整数中没有负数。" << endl;
    return 0;
}
