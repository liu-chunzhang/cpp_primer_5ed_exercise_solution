// 本程序用于验证教材中1.3节内容的可靠性，并提供感性认知
#include <iostream>
/*
 * 简单主函数
 * 读取两个整数，求它们的和
 */
using namespace std;
int main()
{
    cout << "请输入两个整数：" << endl;    // 提示用户输入两个整数
    int v1 = 0 , v2 = 0 ;                   // 保存我们读入的输入数据的变量
    cin >> v1 >> v2 ;                       // 读取输入数据
    cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

   /*
    *注释对/* */不能嵌套
    *“不能嵌套”几个字会被认为是源码，
    *像剩余程序一样处理
    */
    return 0;
}
