// 本程序用于验证读者在练习3.36的中想法，并在必要的地方予以说明：比较两个数组相等
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    vector<int> ia1( 10 ) , ia2( 10 ) ;
    static default_random_engine e ;
    static uniform_int_distribution<unsigned> u( 0 , 9 ) ;
    for( size_t k = 0 ; k != 10 ; ++k )
        ia1[k] = u( e ) , ia2[k] = u( e ) ;                      // 使用随机数生成两个数组的元素，每次循环生成一个10以内的随机数并添加到两个数组中
    if( ia1.size() != ia2.size() ){
        cerr << "这两个数组不相等！1" << endl;                  // 显然，数组维数不相等的两数组必然不可能相等
        return -1;
    }
    else if( ia1 != ia2 ){
        cerr << "这两个数组不等！2" << endl;
        return -1 ;
    }
    else{
        cout << "这两个数组相等！" << endl;
        return 0;
    }
}
