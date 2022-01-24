// 本程序用于验证教材中2.6.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

struct Sales_data {
  string bookNo ;
  unsigned units_sold = 0 ;
  double revunue = 0.0 ;
};

int main() {
    Sales_data accum , trans ;
    Sales_data *salesptr = &accum;
    cout << accum.units_sold << " " << trans.units_sold << endl;   // 整型变量默认初始化为0
    cout << accum.revunue << " " << trans.revunue << endl;         // 浮点型变量默认初始化为0
    cout << accum.bookNo << "1 1" << trans.bookNo << "1" << endl;  // 初始化成了空串
  //cout << accum << endl;                                          // 目前的阶段只能用ostream输出整型这种自定义类型，之后会学习解决直接输出自定义
                                                                    // 类不合法的问题
    return 0;
}
