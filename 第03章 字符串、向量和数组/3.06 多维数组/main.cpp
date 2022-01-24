// 本程序用于验证教材中3.6节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    /*
    constexpr size_t rowCnt = 3 , colCnt = 4 ;
    int ia[rowCnt][colCnt] ;
    for( size_t i = 0 ; i != rowCnt ; ++i )                 // 可以用传统for循环去操作多维数组，但是也可以向下面一样用范围for循环。
        for( size_t j = 0 ; j != colCnt ; ++j )
            ia[i][j] = i * colCnt + j ;
    for( auto &i : ia ){                                    // 有一点需要注意：要使用范围for语句处理多维数组，除了最内侧的循环外，其他所有循环
        for( auto j : i )                                   // 的控制变量都应该是引用类型，否则在读取外层循环后，编译器会初始化这些数组形式的元
            cout << j << " " ;                              // 素为指向该数组内首元素的指针，这样下面得到的对象类型就是指针不是数组了，这显然与
        cout << endl;                                       // 我们原来的目的相去甚远。
    }
    */

    /*
    int ia[3][4] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ;             // 为了下面打印不出奇异值，特地初始化了一下
    int (*p)[4] = ia ;                                      // p指向了含有4个整数的数组
    p = &ia[2] ;                                            // p指向了ia的尾元素
    for( auto p = ia ; p != ia + 3 ; ++p ){                // 输出ia中每个元素的值，每个内层数组占一行；p指向了含有4个整数的数组
        for( auto q = *p ; q != *p + 4 ; ++q )             // q指向了4个整数数组的首元，即q指向一个整数
            cout << *q << ' ' ;
        cout << endl;
    }
    for( auto p = begin(ia); p != end(ia) ; ++p ){         // p指向ia的第一个数组
        for( auto q = begin(*p) ; q != end(*p) ; ++q )     // q指向内层数组的首元素
            cout << *q << ' ' ;                             // 将q解引用，获取其所指的整数值
        cout << endl;
    }
    */

    return 0;
}
