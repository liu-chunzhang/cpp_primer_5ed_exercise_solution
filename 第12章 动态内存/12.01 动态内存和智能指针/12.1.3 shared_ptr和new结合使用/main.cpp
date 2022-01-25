// 本程序用于验证教材中12.1.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <memory>
using namespace std;

void process( shared_ptr<int> ptr ) ;

int main() {
    shared_ptr<double> p1 ;                      // shared_ptr可以指向一个double
    shared_ptr<int> p2( new int( 42 ) ) ;        // p2指向一个值为42的int

  //shared_ptr<int> p21 = new int( 1024 ) ;        // 错误：必须使用直接初始化形式
    shared_ptr<int> p22( new int ( 1024 ) ) ;    // 正确：使用直接初始化

    shared_ptr<int> p( new int( 42 ) ) ;
    process( p ) ;
    int i = *p ;
    cout << i << endl;

    int* x = ( new int( 1024 ) ) ;
  //process( x ) ;                                 // 错误：不能将int*转换为一个shared_ptr<int>
    process( shared_ptr<int>( x ) ) ;             // 虽然合法，但是内存被释放了（可以多运行几次试试，看看每次打印结果是否一样）
    int j = *x ;                                   // 未定义行为：x是一个空悬指针！
    cout << j << endl;

    shared_ptr<int> p4( new int( 42 ) ) ;         // 引用计数为1
    int *q = p4.get() ;                             // 正确：但使用q时要注意，不用让它管理的指针被释放
    {
        shared_ptr<int>( q ) ;                    // 未定义行为：两个独立的shared_ptr指向相同的内存
    }
    int foo = *p4 ;                                 // 未定义行为：p指向的内存已被释放


    shared_ptr<int> p3( new int( 1024 ) ) ;       // 错误：不能将一个指针赋予shared_ptr
    p3.reset( new int( 512 ) ) ;                   // 正确：p指向一个新对象，打印结果可以确实这一点
    cout << *p3 ;
    return 0;
}

/*
shared_ptr<int> clone( int p ) {
    return new int( p ) ;                          // 错误：隐式转换为shared_ptr<int>
}
*/

void process( shared_ptr<int> ptr ){
    cout << *ptr << " " ;
}
