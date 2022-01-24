// 本程序用于验证教材中8.2.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
using namespace::std;

int main() {
    ofstream out( "file1.txt" ) ;
    ofstream out2( "file1.txt" , ios::out ) ;                   // 隐含地以输出模式打开文件并截断文件
    ofstream out3( "file1.txt" , ios::out | ios::trunc ) ;      // 隐含地截断文件
    ofstream app( "file2.txt" , ios::app ) ;                    // 为了保留文件内容，必须显式指定app模式
    ofstream app2( "file2.txt" , ios::out | ios::app ) ;        // 隐含为输出模式

    ofstream out4 ;                                             // 未指定打开文件模式
    out4.open( "scratchpad" ) ;                                  // 模式隐含设置为输出与截断
    out4.close() ;                                               // 关闭out，以便我们将其用于其他文件
    out4.open( "precious" , ofstream::app ) ;                   // 模式为输出与追加
    out4.close() ;
    return 0;
}
