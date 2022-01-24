// 本程序用于验证教材中2.6.2节内容的可靠性，并提供感性认知
#include <iostream>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data data1 , data2 ;
    double price = 0 ;                                                             // 书的单价，用来计算收入
    cin >> data1.bookNo >> data1.units_sold >> price ;
    data1.revenue = data1.units_sold * price ;                                      // 总价1=销售量1*单价
    cin >> data2.bookNo >> data2.units_sold >> price ;
    data2.revenue = data2.units_sold * price ;                                      // 总价2=销售量2*单价
    if( data1.bookNo == data2.bookNo ){
        unsigned totalCnt = data1.units_sold + data2.units_sold ;                  // 总销售量=销售量1+销售量2
        double totalRevenue = data1.revenue + data2.revenue ;                      // 总价=总价1+总价2
        cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " " ;
        if( totalCnt != 0 )
            cout << totalRevenue/totalCnt << endl;
        else
            cout << "未售出。" << endl;
        return 0;                                                                  // 标示成功
    }else{
        cerr << "具有相同ISBN码的数据方可计算！" << endl;
        return -1;                                                                 // 标示失败
    }
}
