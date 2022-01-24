// 本程序用于验证教材中3.3.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    /*
    vector<int> v{ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    for( auto &i : v )                                         // 此处的auto可以换为int
        i *= i ;
    for( auto i : v )
        cout << i << " ";
    cout << endl;
    */

    /*
    vector<unsigned> scores( 11 , 0 ) ;
    unsigned grade = 0 ;
    ifstream readFile( "data.txt" ) ;
    while( readFile >> grade )
        if( grade <= 100 )
          ++scores[grade/10] ;
    for( unsigned i : scores )                               // 此处因为需要打印出scores记录的全体，所以我用了范围for语句，显得更为简练。
       cout << i << " " ;                                    // 但是还是要注意区分：如果用传统for循环去写这个程序，则定义的循环变量i是下
    */                                                       // 标，借以连接变量；而此处的i就是变量本身！如果去打印scores[i]是得不到正确
                                                             // 结果的！
    /*
    vector<int> ivec;                                        // 空vector对象
    for( decltype(ivec.size()) ix = 0 ; ix != 10 ; ++ix )
        ivec[ix] = ix ;
    cout << ivec[0] << endl;                                 // 虽然编译器没有报错，但是这段代码是错误的！严禁用下标访问不存在的元素地址！
    */

    /*
    vector<int> ivec;                                        // 空vector对象
    for(decltype(ivec.size()) ix = 0 ; ix != 10 ; ++ix)
        ivec.push_back(ix);
    cout << ivec[6] << endl;                                 // 额外增加的输出语句便于验证其正确性
    */

    return 0;
}
