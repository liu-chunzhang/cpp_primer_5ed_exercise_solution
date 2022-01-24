// 本程序用于验证读者在练习3.23中的想法，并在必要的地方予以说明
#include <iostream>
#include <random>
#include <vector>
using namespace std;                // C++不应该使用库函数rand，而应该使用default_random_engine类和恰当的分布类对象

int main() {
    vector<unsigned> uvec ;
    static default_random_engine e ;                                     // 设计随机引擎
    static uniform_int_distribution<unsigned> u( 0 , 999 ) ;            // 设计随机分布
    for( vector<int>::size_type i = 0 ; i != 10 ; ++i )                   // 循环10次，生成10个随机数
        uvec.push_back( u(e) ) ;                                           // 每次循环生成一个1000内的随机数并添加到uvec中

    cout << "随机生成的10个数字是：" << endl;
    for( vector<unsigned>::iterator i = uvec.begin() ; i != uvec.end() ; ++i ){     // 必须用非常量迭代器去执行倍乘操作，因为其改写了数值，相应的，下面的就可以用常量
        cout << *i << " " ;                                  // 迭代器
        *i *= 2 ;
    }

    cout << "\n它们变为二倍后分别为：" << endl;
    for( vector<unsigned>::const_iterator i = uvec.cbegin() ; i != uvec.cend() ; ++i )
        cout << *i << " " ;
    return 0;
}
