// 本程序用于验证教材中1.4.4节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main(){
    int currVal = 0 , val = 0 ;                                                // currVal是我们正在统计的数；我们将读入的新值存入val；
    if( cin >> currVal ){                                                     // 读取第一个数，并确保确实有数据可以处理
        int cnt = 1 ;                                                          // cnt用于保存我们正在处理的当前值的个数
        while( cin >> val )                                                   // 读取剩余的数
            if( val == currVal )                                               // 如果值相同
                ++cnt ;                                                        // 将cnt自增
            else{
                cout << currVal << " occurs " << cnt << " times." << endl;    // 否则，打印前一个值出现的个数
                cnt = 1 , currVal = val ;                                      // 重置计数器后并记住新值
            }                                                                  // while循环在这里结束
        cout << currVal << " occurs " << cnt << " times." << endl;            // 打印文件中的最后一个值的个数
    }                                                                          // 最外层的if语句在这里结束
    else
        cout << "No integer data was entered." << endl;                       // 若没有数据可以处理，输出这样的结果
    return 0;
}
