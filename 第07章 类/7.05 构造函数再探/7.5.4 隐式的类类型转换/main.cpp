// 本程序用于验证教材中7.2.1节内容的可靠性，并提供感性认知
#include "Sales_data.h"

int main() {
    string null_book1 = "9-999-99999-9" ;
    Sales_data item1( "9-999-99999-9" ) ;
    item1 += null_book1 ;
    item1 += "9-999-99999-9" ;                   // 错误：需要用户定义的两种转换
    item1 += string( "9-999-99999-9" ) ;         // 正确：显式转化为string，隐式转化为Sales_data
    item1 += Sales_data( "9-999-99999-9" ) ;     // 正确：隐式转化为string，隐式转化为Sales_data

    Sales_data item2 ;
    item2 += cin ;                               // istream构造函数是explicit的

    Sales_data item3 ;
    string null_book2( "Hello wordl!" ) ;
    Sales_data item4( null_book2 ) ;                  // 拷贝初始化会发生隐式转换，直接初始化不会
    return 0;
}
