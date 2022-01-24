// 本程序用于验证教材中8.1.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out1 , out2 ;
    out1 = out2 ;                           // 错误：不能对流对象赋值
    ofstream print( ofstream ) ;          // 错误：不能初始化ofstream参数
    out2 = print( out2 ) ;                  // 错误：不能拷贝流对象
    return 0;
}
