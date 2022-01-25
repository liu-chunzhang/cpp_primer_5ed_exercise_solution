// 本程序用于验证教材中14.8.3节内容的可靠性，并提供感性认知
#include <functional>
#include <map>
#include "divide.h"

int add( int i , int j ) ;
auto mod = []( int i , int j ){ return i % j ; } ;

int main() {
    map<string,int(*)(int,int)> binops ;                // 构建从运算符到函数指针的映射，其中函数接受两个int、返回一个int
    binops.insert( { "+" , add } ) ;                     // 正确：add是一个指向正确类型的函数，{ "+" , add }是一个pair
    binops.insert( { "%" , mod } ) ;                     // 注意！此处和教材所述不同，是被允许的！
  //binops.insert( { "/" , divide() } ) ;                // 错误：divide不是一个函数指针

    function<int(int,int)> f ;
    function<int(int,int)> f1 = add ;
    cout << f1( 4 , 2 ) << endl;
    function<int(int,int)> f2 = divide() ;
    cout << f2( 4 , 2 ) << endl;
    function<int(int,int)> f3 = []( int i , int j ) -> int { return i * j ; } ;
    cout << f3( 4 , 2 ) << endl;

    map<string,function<int(int,int)>> binops2 = { { "+" , add } ,                                        // 函数指针
                                                      { "-" , minus<int>() } ,                              // 标准库函数对象
                                                      { "/" , divide() } ,                                   // 用户定义的函数对象
                                                      { "*" , []( int i , int j ){ return i * j ; } } ,     // 未命名的lambda
                                                      { "%" , mod } } ;                                      // 命名了的lambda
    cout << binops2["+"]( 10 , 5 ) << endl;                                                    // 调用add( 10 , 5 )
    cout << binops2["-"]( 10 , 5 ) << endl;                                                    // 使用minus<int>对象的调用运算符
    cout << binops2["*"]( 10 , 5 ) << endl;                                                    // 使用divide对象的调用运算符
    cout << binops2["/"]( 10 , 5 ) << endl;                                                    // 调用lambda函数对象
    cout << binops2["%"]( 10 , 5 ) << endl;                                                    // 调用lambda函数对象

    map<string,function<int(int,int)>> binops3 ;
    int (*fp)( int , int ) = add ;
    binops3.insert( { "+" , fp } ) ;
    binops3.insert( { "*" , []( int a , int b ) -> int { return a * b ; } } ) ;
    return 0;
}

int add( int i , int j ){
    return i + j ;
}
