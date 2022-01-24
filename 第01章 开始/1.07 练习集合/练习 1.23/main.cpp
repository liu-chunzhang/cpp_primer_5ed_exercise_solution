// 本程序用于验证读者在练习1.23中的想法，并在必要的地方予以说明
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    cout << "请输入若干条销售记录：" << endl;
    Sales_item trans1 , trans2 ;
    int count_num = 1 ;                                                                  // count_num记录某个ISBN码的销售记录出现的总次数
    if( cin >> trans1 ){
        while( cin >> trans2 ){
            if( trans1.isbn() == trans2.isbn() )                                         // ISBN相同
                ++count_num ;
            else{                                                                        // ISBN不同
                cout << trans1.isbn() << "共有" << count_num << "条销售记录。" << endl; // 输出出现的总次数
                trans1 = trans2 , count_num = 1 ;
            }
        }
        cout << trans1.isbn() << "共有" << count_num << "条销售记录。" << endl;
        return 0 ;
    }
    else{
        cout << "没有销售记录!" << endl;
        return -1;
    }
}
