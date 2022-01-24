// 本程序用于验证读者在练习3.32中的想法，并在必要的地方予以说明：将练习3.31里创建的数组拷贝给一个新数组（用vector）
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ia1 , ia2;                 // 创建两个vector：ia1和ia2
    for( size_t i = 0 ; i != 10 ; ++i )
        ia1.push_back( i ) ;               // 用ia1接收新创建的整数
    ia2 = ia1 ;
    for( int i : ia2 )                     // 打印以便检验结果
        cout << i << " " ;
    return 0;
}
