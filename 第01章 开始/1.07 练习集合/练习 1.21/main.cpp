// 本程序用于验证读者在练习1.21中的想法，并在必要的地方予以说明
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1 , item2 ;
    cout << "请输入两条销售记录：" << endl;
    cin >> item1 >> item2 ;
    if( compareIsbn( item1 , item2 ) )
        cout << "汇总信息：ISBN、售出本数、销售额和平均售价为" << item1 + item2 << endl;
    else
        cout << "这两条销售信息的ISBN码不相同！" << endl;
    return 0;
}
