// 本程序用于验证读者在练习6.32中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int &get( int *arry , int index ) ;         // 该函数是合法的。get函数接受了一个整型指针，该指针实际指向一个整型数组的首元，另外还接受一个整数表
                                             // 示数组中某个元素的索引值。它的返回值类型是整型引用，引用的对象是arry数组的某个元素。当get函数执行
int main() {                                // 完毕后，调用者得到实参数组arry中索引为index的元素的引用。
    int ia[10] ;                            // 在main函数中，首先创建一个包含10个整数的数组，名字是ia。请注意，由于ia定义在main函数的内部，所以ia
    for( int i = 0 ; i != 10 ; ++i )        // 不会执行默认初始化操作，如果此时我们直接输出ia每个元素的值，这些值都是未定义的。
        cout << get( ia , i ) << "\t" ;     // 接下来进入循环，每次循环使用get函数得到数组ia中第i个元素的引用，为该引用赋值i，也就是说，为第i个元
    cout << endl;                          // 素赋值i。循环结束后，ia的元素依次被赋值为0~9
    for( int i = 0 ; i != 10 ; ++i ){
        get( ia , i ) = i ;
        cout << get( ia , i ) << "\t" ;
    }
    return 0;
}

int &get( int *arry , int index ) {
    return arry[index] ;
}
