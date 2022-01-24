// 本程序用于验证读者在练习4.11.3中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {

    int i = 3 ,j = 7 ;
    double slope = static_cast<double>( j ) / i ;
    cout << slope << endl;
    double d = slope ;
    void *p1 = &d ;                                    // 可查看教材P50：void*所指的对象不能够直接操作，没办法直接访问内存空间中的对象
    double *dp = static_cast<double*>( p1 ) ;
    cout << *dp ;

    char k = 'a' ;                                    // 教材上讲通过p写值是未定义的行为，但是即使定义变量k是const char类型，结果也不变
    const char *pc = &k ;
    char *p = const_cast<char*>( pc ) ;
    *p = 'y' ;
    cout << *p ;

    const char *cp ;
    char *q = static_cast<char*>( cp ) ;              // 错误：static_cast不能转换掉const性质
    static_cast<string>( cp ) ;                       // 正确：字符串字面值转换成string类型
    const_cast<string>( cp ) ;                        // 错误：const_cast只改变常量属性

    int i2 = 3 , *ip = &i2 ;
    char *pc = reinterpret_cast<char*>( ip ) ;
    string str( pc ) ;
    cout << *pc ;                                     // 运行结果为空，这本身就是个异常行为。
    return 0;
}
