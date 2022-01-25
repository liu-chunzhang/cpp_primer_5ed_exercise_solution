// 本程序用于验证教材中17.1.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <list>
#include <tuple>
#include <vector>
using namespace std;

int main() {
    tuple<size_t,size_t,size_t> threeD ;                        // 使用默认构造函数
    tuple<string,vector<double>,int,list<int>> someVal( "constants" , { 3.14 , 2.718 } , 42 , { 0 , 1 , 2 , 3 , 4 , 5 } ) ;

    tuple<size_t,size_t,size_t> threeD1 = { 1 , 2 , 3 } ;
    tuple<size_t,size_t,size_t> threeD2{ 1 , 2 , 3 } ;


    tuple<string,unsigned,double> item = make_tuple( "0-999-78345-X" , 3 , 20.00 ) ;
    string book = get<0>( item ) ;                                // 返回item的第一个成员
    unsigned cnt = get<1>( item ) ;                               // 返回item的第二个成员
    double price = get<2>( item ) / cnt ;                         // 返回item的第三个成员
    get<2>( item ) *= 0.8 ;
    cout << book << " " << cnt << " " << get<2>( item ) << endl;


    typedef decltype( item ) trans ;                           // trans是item的类型
    size_t sz = tuple_size<trans>::value ;                     // 返回trans类型对象中成员的数量
    tuple_element<1,trans>::type cnt0 = get<1>( item ) ;
    cout << sz << " " << cnt0 ;

    tuple<string,string> duo( "1" , "2" ) ;
    tuple<size_t,size_t> twoD( 1 , 2 ) ;
  //bool b = ( duo == twoD ) ;                                  // 错误：不能比较size_t和string
    tuple<size_t,size_t,size_t> threeD3( 1 , 2 , 3 ) ;
    bool b ;
  //b = ( twoD < threeD ) ;                                     // 错误：成员数量不同
    tuple<size_t,size_t> origin( 0 , 0 ) ;
    b = ( origin < twoD ) ;                                     // 正确，成员数量和相应类型均相同，可以比较
    cout << b ;
    return 0;
}
