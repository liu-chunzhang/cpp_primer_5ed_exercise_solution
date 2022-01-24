// 本程序用于验证教材中5.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int i = 0 ;
    for( int j = 0 ; j != 10 ; ++j )
        i += j ;
    cout << i << endl;
  //cout << j << endl;                               // 错误：在循环外部不能够访问之前循环的块内的变量j

    vector<int> vint{ 0 , 2 , -4 , 6 , -8 , 10 } ;
    vector<int>::iterator beg = vint.begin() ;
    while( beg != vint.end() && *beg >= 0 )
        ++beg ;
    cout << ( beg == vint.end() ? "vector内元素全是非负数!" : "vector内元素有负数！" ) << endl;   // 为了使效果可视化，增加了输出和判断语句
    return 0;
}
