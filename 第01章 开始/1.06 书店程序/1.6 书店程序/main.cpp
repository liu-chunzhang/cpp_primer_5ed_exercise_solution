// 本程序用于验证教材中1.6节内容的可靠性，并提供感性认知
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item total ;                             // 保存下一条交易记录的变量
    if( cin >> total ){
        Sales_item trans ;                         // 保存和的变量
        while( cin >> trans )                     // 读入并处理剩余交易记录
            if( compareIsbn( trans , total ) )     // 如果我们仍在处理相同的书
                total += trans;                    // 更新销售总额
            else{
                cout << total << endl;            // 打印前一本书的结果
                total = trans ;                    // 现在表示下一本书的销售额
            }
        cout << total << endl;                    // 打印最后一本书的结果
    }
    else{
         cout << "未检测到输入!" << endl;         // 没有输入！
         return -1 ;                              // 表示失败
    }
    return 0 ;
}
