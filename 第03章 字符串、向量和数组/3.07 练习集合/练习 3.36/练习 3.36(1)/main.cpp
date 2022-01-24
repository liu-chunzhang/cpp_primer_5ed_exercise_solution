// 本程序用于验证读者在练习3.36的中想法，并在必要的地方予以说明：比较两个数组相等
#include <iostream>
#include <random>
using namespace std;

int main() {
    constexpr unsigned sz1 = 10 , sz2 = 10 ;                   // 使用两个常量作为数组的维度
    int ia1[sz1] , ia2[sz2];
    static default_random_engine e ;
    static uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    size_t size_ia1 = sizeof( ia1 ) / sizeof( ia1[0] ) , size_ia2 = sizeof( ia2 ) / sizeof( ia2[0] ) ;
    if( size_ia1 != size_ia2 ){
        cout << "这两个数组不相等！1" << endl;                   // 显然，数组维数不相等的两数组必然不可能相等
        return -1;
    }
    else{
        for( size_t i = 0 ; i != sz1 ; ++i )                    // 使用随机数生成两个数组的元素
            ia1[i] = u(e) , ia2[i] = u(e) ;                      // 每次循环生成一个10以内的随机数并添加到两个数组中
        for( size_t i = 0 ; i != sz1 ; ++i )                    // 使用for循环移动指针，也可以考虑用while循环写这一步
            if( ia1[i] != ia2[i] ){
                cerr << "这两个数组不相等！2" << endl;
                return -1;
            }
        cout << "这两个数组相等！" << endl;
        return 0;
    }
}
