// 本程序用于验证教材中4.5节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    int i = 0 , j ;
    j = ++i ;
    cout << j << " = ++" << i << endl;
    i = 0 ;
    j = 0 ;
    j = i++ ;
    cout << j << " = " << i << "++" << endl;
    */

    vector<int> v{ 0 , 2 , -4 , 6, -8 , 10 } ;
    auto pbeg = v.begin() ;
    while(pbeg != v.end() && *pbeg >= 0)
        cout << *pbeg++ << endl;

    string s{ "hello world!" } ;
    string::iterator beg = s.begin() ;
    while( beg != s.end() && ! isspace( *beg ) ){
        cout << *beg ;
        *beg = toupper( *beg++ ) ;                  // 错误：该赋值语句未定义！似乎它就会不再执行*beg++一样，实际应该是先执行了拷贝副本，然后
    }                                               // 执行自增操作，然后执行将副本拷贝过去，这样相当于从第二个字母开始，将第一个字母的大写版
    return 0;                                      // 本赋给了之后的每一个非零char。并且不会报错与警告！
}
