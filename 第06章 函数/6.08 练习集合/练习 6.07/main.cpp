// 本程序用于验证读者在练习6.7中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

unsigned return_add_1() ;

int main() {
    for( int i = 0 ; i != 10 ; ++i )
        cout << return_add_1() << " " ;
    return 0;
}

unsigned return_add_1(){
    static unsigned i = -1 ;                     // 关键在于定义变量为static int类型而不是int类型，否则将输出0 0 0 0 0 0 0 0 0 0
    return ++i ;                                  // 这里用unsigned类型，而不用int，不是说都换成换成int类型做不了，相应的，似乎应该是unsigned
}                                                 // 类型这里做不了，但是请注意无符号数的类型转化规则是（教材P33）：当我们赋给无符号类型一个超
                                                  // 出其表示范围的值时，结果是初始值对无符号类型表示数值总数取模后的余数，所以++i后i恢复到0。
