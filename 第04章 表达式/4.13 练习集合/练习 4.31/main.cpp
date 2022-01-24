// 本程序用于验证读者在练习4.31中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;                                                         // 从运行结果来说，使用前置版本和使用后置版本没什么区别。

int main() {
    vector<int> ivec(10) ;                                                    // 这是因为递增递减运算符与真正使用这两个变量的语句位于不同的表达式
    vector<int>::size_type cnt = ivec.size() ;                               // 中，所以不会有什么影响
    for( vector<int>::size_type ix = 0 ; ix != ivec.size() ; ix++, cnt-- ){ // 只需将for循环语句的第三行改为后置版本就行，其他无需调整
        ivec[ix] = cnt ;                                                       // 主要是使用后置版本拷贝的副本值又在本程序中不加以使用，造成浪费，
        cout << ivec[ix] << " " ;                                             // 所以就本题而言，使用前置版本是最好的选择
    }
    return 0;
}
