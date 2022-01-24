// 本程序用于验证读者在练习7.41中的想法，并在必要的地方予以说明
#include "Sales_data.h"

int main() {
    Sales_data first( "978-7-121-15535-2" , 85 , 128 , 100 ) ;       // 委托构造函数多层嵌套时，执行顺序遵循栈的方式，最后被调用的函数的函数体
    Sales_data second ;                                        // 代码最先被执行，然后控制权才会交还给委托者的函数体。
    Sales_data third( "978-7-121-15535-2" ) ;
    Sales_data fourth( cin ) ;
    return 0;
}
