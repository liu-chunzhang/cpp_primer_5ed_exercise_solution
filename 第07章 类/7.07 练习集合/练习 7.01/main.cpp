// 本程序用于验证读者在练习7.1中的想法，并在必要的地方予以说明
#include <iostream>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data total ;
    if( cin >> total  ){                             // 个人根据Sales_data类型在本题中的需求重新书写了程序，使用新定义的对于类类型的>>运算符
        Sales_data trans ;                           // 进行输入，<<进行输出。
        while( cin >> trans ){
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else{
                cout << total << endl;
                total = trans ;
            }
        }
        cout << total << endl;
    }
    else{
        cerr << "您没有输入数据!" << endl;
        return -1 ;
    }
    return 0;
}
