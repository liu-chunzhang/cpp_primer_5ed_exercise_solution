// 本程序用于验证读者在练习17.36中的想法，并在必要的地方予以说明
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;        // 用setw同时控制前缀说明文字和数值表示就可以对齐结果

int main()
{   cout << setw( 20 ) << "default format: " << setw( 20 ) << sqrt( 2.0 ) << endl;
    cout << setw( 20 ) << "scientific: " << scientific << setw( 20 ) << sqrt( 2.0 ) << endl;
    cout << setw( 20 ) << "fixed decimal: " << fixed << setw( 20 ) << sqrt( 2.0 ) << endl;
    cout << setw( 20 ) << "hexadecimal: " << hexfloat << setw( 20 ) << sqrt( 2.0 ) << endl;
    cout << setw( 20 ) << "use default: " << defaultfloat << setw( 20 ) << sqrt( 2.0 ) << endl;
    return 0;
}
