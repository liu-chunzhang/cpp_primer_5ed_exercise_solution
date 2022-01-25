// 本程序用于验证教材中19.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

enum class open_modes{ input , output , append };
enum color { red , yellow , green };                    // 不限定作用域的枚举类型
//enum stoplight { red , yellow , green };              // 错误：重复定义了枚举成员
enum class peppers { red , yellow , green };           // 正确：枚举成员被隐藏了

enum intValues : unsigned long long { charTyp = 255 , shortTyp = 65535 , intTyp = 65535 , longTyp = 4294967296UL , long_longTyp = 18446744073709551615ULL };
enum Tokens { INLINE = 128 , VIRTUAL = 129 };

void ff( int i ) ;
void ff( Tokens tokens ) ;

int main() {
    color eyes = green ;                 // 不限定作用域的枚举类型
  //peppers p = green ;                 // 错误：peppers的枚举成员不在有效的作用域中，color::green在有效的作用域中，但类型错误
    color hair = color::red ;           // 正确：允许显式地访问枚举成员
    peppers p2 = peppers::red ;         // 正确：使用pappers的red

  //open_modes om = 2 ;                 // 错误：2不属于类型open_modes
    open_modes om ;
    om = open_modes::input ;            // 正确：input是open_modes的一个枚举成员

    int i = color::red ;                // 正确：不限定作用域的枚举类型的枚举成员隐式地转换成int
  //int j = peppers::red ;              // 错误：限定作用域的枚举类型不会进行隐式转换

    Tokens curTok = INLINE ;
    ff( 128 ) ;                         // 精确匹配ff( int )
    ff( INLINE ) ;                      // 精确匹配ff( Tokens )
    ff( curTok ) ;                      // 精确匹配ff( Tokens )
    return 0;
}

void ff( int i ) {
    cout << "Using function void ff( int i )" << endl;
}

void ff( Tokens tokens ) {
    cout << "Using function void ff( Tokens tokens )" << endl;
}
