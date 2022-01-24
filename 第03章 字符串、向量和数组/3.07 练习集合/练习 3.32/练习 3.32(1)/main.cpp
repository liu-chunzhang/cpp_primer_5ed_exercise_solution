// 本程序用于验证读者在练习3.32中的想法，并在必要的地方予以说明：将练习3.31里创建的数组拷贝给一个新数组（不用vector）
#include <iostream>
using namespace std;

int main() {
    int ia1[10] ;
    for( size_t i = 0 ; i != 10 ; ++i )
        ia1[i] = i ;

    int ia2[10] ;
    for( size_t i = 0 ; i != 10 ; ++i )
        ia2[i] = ia1[i] ;
    for( int i : ia2 )                      // 打印以便检验结果
        cout << i << " " ;
    return 0;
}
