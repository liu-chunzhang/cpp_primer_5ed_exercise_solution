// 本程序用于验证教材中15.7.1节内容的可靠性，并提供感性认知
#include "Bulk_quote.h"
#define NDE_BUG

int main() {
    Quote q ;                             // 定义一个Quote类对象
    Quote *itemP = new Quote( q ) ;       // 为之分配一个指向它的指针，此时静态类型和动态类型一致
    delete itemP ;                       // 调用Quote的析构函数
    itemP = nullptr ;

    #ifdef NDE_BUG                        // 为了使用调试观看效果方便，加入NDEBUG预处理变量（P216）
    itemP = new Bulk_quote ;              // 此时静态类型和动态类型不一致
    delete itemP ;                       // 调用Bulk_quote的析构函数
    itemP = nullptr ;
    #endif // NDE_BUG0
    return 0;
}
