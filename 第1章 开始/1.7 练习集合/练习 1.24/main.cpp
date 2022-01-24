// 本程序用于验证读者在练习1.24中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>                                              // 这次用文件输入代替命令行的标准输入
#include "Sales_item.h"
using namespace std;

int main() {
    cout << "请输入若干条销售记录：" << endl;
    Sales_item trans1 , trans2 ;
    int count_num = 1 ;
    ifstream in( "data.txt" ) ;
    if( in >> trans1 ){
        while( in >> trans2 ){
            if( trans1.isbn() == trans2.isbn() )
                ++count_num ;
            else{
                cout << trans1.isbn() << "共有" << count_num << "条销售记录。" << endl;
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
