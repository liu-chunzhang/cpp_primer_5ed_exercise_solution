// 本程序用于验证读者在练习2.38中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int a = 3 ;
    auto c1 = a ;                                    // c1的推断结果是整型变量，
    decltype( a ) c2 = a ;                          // c2的推断结果是整型变量
    decltype(( a )) c3 = a ;                        // c3的推断结果是整型引用
    cout << typeid( c1 ).name() << endl;
    cout << typeid( c2 ).name() << endl;
    cout << typeid( c3 ).name() << endl;
    ++c1 ;
    ++c2 ;
    ++c3 ;                                           // 所以c3自增等价于a自增，从而这一轮自增操作后a、c1、c2、c3的值都是4
    cout << c1 << " " << c2 << " " << c3 << endl;

    const int d = 5 ;
    auto f1 = d ;                                    // f1的推断结果是整型变量
    decltype( d ) f2 = d ;                           // f2的推断结果是整型常量
    cout << typeid( f1 ).name() << endl;
    cout << typeid( f2 ).name() << endl;
    ++f1 ;
    ++f2 ;                                            // 所以f2的自增操作是非法的
    cout << f1 << " " << f2 << endl;
    return 0;
}
