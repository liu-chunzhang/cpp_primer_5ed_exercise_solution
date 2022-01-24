// 本程序用于验证读者在练习7.7中的想法，并在必要的地方予以说明
#include "Sales_data.h"                                        // 由于头文件已经包含了<iostream>库，所以删去包含这个库的那句代码没用影响

int main() {
    Sales_data total ;
    if( cin >> total ){
        Sales_data trans ;
        while( cin >> trans ) {
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else{
                cout << total ;
                total = trans ;
            }
        }
        cout << total ;
    }
    else{
        std::cerr << "您没有输入数据!" << std::endl;
        return -1 ;
    }
    return 0;
}
