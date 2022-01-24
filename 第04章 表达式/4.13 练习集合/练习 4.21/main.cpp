// 本程序用于验证读者在练习4.21中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main() {
    constexpr size_t sz = 10 ;                   // 使用常量sz作为数组的维度
    vector<int> ivec ;
    static default_random_engine e ;
    static uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    for( size_t i = 0 ; i != sz ; ++i )
        ivec.push_back( u(e) ) ;                 // 生成100以内的随机数
    cout << "输入的数字为：" << endl;
    for( int i : ivec )
        cout << i << " " ;                       // 打印输入结果，以便与后面比较
    cout << endl;
    cout << "输出的数字为：" << endl;
    for( int &i : ivec )                         // 因为要改写，所以必须用引用
         i = ( ( i % 2 != 0 ) ? 2 * i : i ) ;    // 条件表达式：如果是奇数，翻倍；偶数则不变
    for( int i : ivec )
        cout << i << " " ;
    return 0;
}
