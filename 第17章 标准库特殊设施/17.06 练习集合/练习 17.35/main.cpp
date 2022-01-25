// 本程序用于验证读者在练习17.35中的想法，并在必要的地方予以说明
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   cout << uppercase << hexfloat << sqrt( 2 ) << nounitbuf << endl;  // uppercase保证大写，hexfloat保证浮点数按照十六进制打印，nounitbuf
    return 0;                                                         // 对于一切改变的状态进行恢复（本题中并非必须，不过还是这样比较好）
}
