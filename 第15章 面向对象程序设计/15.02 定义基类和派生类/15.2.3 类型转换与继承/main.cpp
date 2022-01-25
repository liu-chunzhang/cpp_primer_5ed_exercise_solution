// 本程序用于验证教材中15.2.3节内容的可靠性，并提供感性认知
#include "Bulk_quote.h"

int main() {
    Quote base ;
    Bulk_quote *bulkP = &base ;   // 错误：不能将基类转换成派生类
    Bulk_quote &bulkRer = base ;  // 错误：不能将基类转换成派生类

    Bulk_quote bulk ;
    Quote *itemP = &bulk ;        // 正确：动态类型是Bulk_quote
    Bulk_quote *bulkP = itemP ;   // 错误：不能将基类转换为派生类

    Bulk_quote bulk2 ;            // 派生类对象
    Quote item( bulk2 ) ;         // 使用Quote::Quote( const Quote& )构造函数
    item = bulk2 ;                // 调用Quote::operator=( const Quote& )
    return 0;
}
