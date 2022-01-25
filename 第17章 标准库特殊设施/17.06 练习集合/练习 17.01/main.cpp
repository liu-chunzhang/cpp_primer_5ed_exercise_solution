// 本程序用于验证读者在练习17.1中的想法，并在必要的地方予以说明
#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int,int,int> tuple3i( 10 , 20 , 30 ) ;            // 注意初始化方法即可
    cout << get<0>( tuple3i ) << " " << get<1>( tuple3i ) << " " << get<2>( tuple3i ) << endl;
    return 0;
}
