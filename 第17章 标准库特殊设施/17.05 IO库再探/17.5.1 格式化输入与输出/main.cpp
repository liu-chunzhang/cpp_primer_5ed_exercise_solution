// 本程序用于验证教材中17.5.1节内容的可靠性，并提供感性认知
#include <iomanip>              // 为了使用setprecision操纵符而添加
#include <iostream>
#include <cmath>                // 为了使用函数sqrt而添加
using namespace std;

bool get_status() ;

int main()
{   /*
    cout << "default bool values: " << true << " " << false << "\nalpha bool values: " << boolalpha << true << " " << false << endl;

    bool bool_val = get_status() ;
    cout << boolalpha << bool_val << noboolalpha << " " << bool_val ;
    */

    /*
    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "octal: " << oct << 20 << " " << 1024 << endl;
    cout << "hex: " << hex << 20 << " " << 1024 << endl;
    cout << "decimal: " << dec << 20 << " " << 1024 << endl;
    */

    /*
    cout << showbase ;
    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "in octal: " << oct << 20 << " " << 1024 << endl;
    cout << "in hex: " << hex << 20 << " " << 1024 << endl;
    cout << "in decimal: " << dec << 20 << " " << 1024 << endl;
    cout << noshowbase ;

    cout << uppercase << showbase << hex << "printed in hexadecimal: " << 20 << " " << 1024 << nouppercase << noshowbase << dec << endl;
    */

    /*
    cout << "Precision: " << cout.precision() << ",Value: " << sqrt( 2.0 ) << endl;     // cout.precision返回当前精度值
    cout.precision( 12 ) ;
    cout << "Precision: " << cout.precision() << ",Value: " << sqrt( 2.0 ) << endl;     // cout.precision(12)将打印精度设置为12位数字
    cout << setprecision( 3 ) ;
    cout << "Precision: " << cout.precision() << ",Value: " << sqrt( 2.0 ) << endl;     // 另一种设置精度的方式是使用setprecision操纵符
    */

    /*
    cout << "default format: " << 100 * sqrt( 2.0 ) << endl;
    cout << "scientific: " << scientific << 100 * sqrt( 2.0 ) << endl;
    cout << "fixed decimal: " << fixed << 100 * sqrt( 2.0 ) << endl;
    cout << "hexadecimal: " << hexfloat << 100 * sqrt( 2.0 ) << endl;
    cout << "use default: " << defaultfloat << 100 * sqrt( 2.0 ) << endl;

    cout << 10.0 << endl;
    cout << showpoint << 10.0 << noshowpoint << endl;
    */

    /*
    int i = -16 ;
    double d = 3.14159 ;
    cout << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" ;                   // 补白第一列，使用输出中最小12个位置
    cout << left << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" << right ;          // 补白第一列，左对齐所有列
    cout << right << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" ;                   // 补白第一列，右对齐所有列
    cout << internal << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n"  ;                  // 补白第一列，但在域的内部
    cout << setfill( '#' ) << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" << setfill( ' ' ) ; // 补白第一列，用#作为补白字符
    */

    /*
    char ch ;                   // 提供输入序列：a b     c
                                //               d
    while( cin >> ch )
        cout << ch ;
    */

    /*
    char ch ;
    cin >> noskipws ;           // 设置cin读取空白符
    while( cin >> ch )
        cout << ch ;
    cin >> skipws ;             // 将cin恢复为默认状态，从而丢弃空白符
    */

    return 0;
}

bool get_status() {
    return true ;
}
