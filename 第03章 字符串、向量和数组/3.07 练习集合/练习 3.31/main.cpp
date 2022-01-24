// 本程序用于验证读者在练习3.31中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int ia[10] ;                                 // 其实把练习3.30的代码稍微改一下就是这个练习的答案
    for( size_t i = 0 ; i != 10 ; ++i )
        ia[i] = i ;
    for( int i : ia )                           // 打印数组以便确认结果是正确的
        cout << i << " ";
    return 0;
}
