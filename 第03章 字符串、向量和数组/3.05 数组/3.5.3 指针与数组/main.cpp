// 本程序用于验证教材中3.5.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    /*
    string nums[] = { "one" , "two" , "three" };     // 数组的元素是string对象
    string *p1 = &nums[0] ;                          // p指向nums的第一个元素
    string *p2 = nums ;                              // 这等价于p2 = &nums[0]
    if( p1 == p2 )                                   // 这个判断语句用于输出两种写法的等价性，输出是p1==p2，说明上两句实际等价。
        cout << "p1 == p2" << endl;
    else
        cout << "p1 != p2" << endl;
    */

    /*
    int ia[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;    // ia是一个含有10个整数的数组
    auto ia2( ia ) ;                                          // ia2是一个整型指针，指向ia的首元
    *ia2 = 42 ;                                                // ia2只是一个指针，不能用int值给其赋值，但是可以改为*ia2 = 42，给ia[0]赋值42。
    decltype(ia) ia3 = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    ia3 = ia2;                                                      // 错误：不能用整型指针给数组赋值
    */

    /*
    int arr[] = { 0 , 12138 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    int *p = arr ;                                               // p指向arr的第一个元素
    ++p ;                                                        // p指向arr[1]
    cout << *p << endl;                                         // 写这个语句是打印结果，便于说明
    for( int *b = arr ; b != &arr[10] ; ++b )
        cout << *b << " " ;
    */

    /*
    int ia[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;       // ia是一个含有10个整数的数组
    cout << *begin(ia) << " " << *end(ia) << endl;              // begin(ia)是指向ia首元素的指针；end(ia)指向arr尾元素的下一位置的指针
    int arr[] = { 0 , 2 , -4 , 6 , -8 , 10 } ;
    int *pbeg = begin(arr) , *pend = end(arr) ;                 // 不需要<iterator>头文件
    while( pbeg != pend && *pbeg >= 0)
        ++pbeg ;
    cout << *pbeg ;
    */

    /*
    constexpr size_t sz = 5 ;
    int arr[sz] = { 1 , 2, 3 , 4 , 5 } ;
    int *ip = arr ;                                  // 等价于int *ip = &arr[0]
    int *ip2 = ip + 4 ;                              // ip2指向arr的尾元素arr[4]
    cout  << *ip << " " << *ip2 << endl;
    */

    /*
    constexpr size_t sz = 5 ;
    int arr[sz] = { 1 , 2 , 3 , 4 , 5 } ;
    int *b = arr , *e = arr + sz ;
    while( b < e )
        ++b ;                                         // 使用*b
    */

    /*
    int ia[] = { 0 , 2 , 4 , 6 , 8 } ;
    int last1 = *(ia + 4) ;                          // 把last1初始化为ia[4]的值
    int last2 = *ia + 4 ;                            // 这等价于last2 = ia[0] + 4
    cout << last1 << " " << last2 << endl;
    int i = ia[2] ;                                  // ia转换成指向数组首元的指针，ia[2]得到(ia + 2)所指的元素
    int *p = ia ;                                    // p指向ia的首元
    int j = *(p + 2);                                // 等价于j = ia[2];
    if( i == j && j == 4)
        cout << "i == j" << endl;
    else
        cout << "i != j" << endl;
    int *q = &ia[2];
    int r = q[1];
    int s = q[-2];
    */

    return 0;
}
