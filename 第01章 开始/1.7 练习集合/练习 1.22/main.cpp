// 本程序用于验证读者在练习1.22中的想法，并在必要的地方予以说明
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item total , trans ;
    cout << "请输入几条ISBN码相同的记录：" << endl;
    if( cin >> total ){
        while( cin >> trans )
        if( compareIsbn( total , trans ) )                                                 // ISBN相同
            total = total + trans;
        else                                                                              // ISBN不同
            cout << "ISBN不同。" << endl , exit(1) ;
    cout << "汇总信息：ISBN、售出本数、销售额和平均售价分别为 " << total << endl;
    }
    else {
        cout << "没有数据。" << endl;
        return -1 ;
    }
    return 0;
}
