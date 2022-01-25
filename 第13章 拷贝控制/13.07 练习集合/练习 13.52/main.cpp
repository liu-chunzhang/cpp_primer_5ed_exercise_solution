// 本程序用于验证读者在练习13.52中的想法，并在必要的地方予以说明
#include "HasPtr.h"

int main() {
    HasPtr hp1( "hello" , 3 ) , hp2( "world" , 4 ) ;
    hp1 = hp2 ;                                        // 对本行命令：因为hp2是一个变量（一个左值），因此它传递给赋值运算符参数h的过程是拷
                                                       // 贝构造过程，h获得hp2的一个副本，h.ps与hp2.ps向不同的string，但两个string包含相同
                                                       // 的内容。在赋值运算符中，交换hp1和h，h指向hp1原来的string，在复制结束后被销毁。最
                                                       // 终结果，hp1和hp2指向两个独立的string，但内容相同。
    hp1 = std::move( hp2 ) ;                          // 对本行命令：hp2传递给p的过程是移动构造过程，p.ps指向原来hp2.ps原来的string，hp2的
    return 0;                                         // ps被设置为空指针。然后赋值运算符交换hp和p，p指向原来的string，在赋值结束
}                                                      // 后被销毁；最终结果是hp指向了hp2原来的string，而hp2变为空。
