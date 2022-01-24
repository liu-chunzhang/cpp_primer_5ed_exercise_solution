// 本程序用于验证读者在练习1.20中的想法，并在必要的地方予以说明
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1 ;
    cout << "请输入一组销售记录：" << endl;
    while( cin >> item1 )
        cout << "该书目的ISBN、售出册数、总销售额和平均售价分别为" << item1 << "。" << endl;
    return 0;
}
