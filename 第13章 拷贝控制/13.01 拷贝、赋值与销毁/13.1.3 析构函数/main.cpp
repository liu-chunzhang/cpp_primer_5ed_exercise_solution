// 本程序用于验证教材中13.1.3节内容的可靠性，并提供感性认知
#include "Sales_data.h"
#include <vector>
#include <memory>

int main() {
    {                                                                // 新作用域，p和p2指向动态分配的对象
        Sales_data *p = new Sales_data ;                             // p是一个内置指针
        shared_ptr<Sales_data> p2 = make_shared<Sales_data>() ;    // p2是一个shared_ptr
        Sales_data item( *p ) ;                                      // 拷贝构造函数将*p拷贝到item中
        vector<Sales_data> vec ;                                    // 局部对象
        vec.push_back( *p2 ) ;                                      // 拷贝p2指向的对象
        delete p ;                                                  // 对p指向的对象执行析构函数
    }                                                                // 退出局部作用域：对item、p2和vec执行析构函数。其中，销毁p2会递减其引用计
    return 0;                                                       // 数：如果引用计数变为0，其将被释放；销毁vec将销毁其元素
}
