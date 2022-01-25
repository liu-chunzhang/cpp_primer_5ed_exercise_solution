// 本程序用于验证教材中16.1.2节内容的可靠性，并提供感性认知
#include "Blob.h"
#include "C.h"
#include "Foo.h"

template <typename T> using twin = pair<T,T> ;                         // 不能把这一句类型别名放在函数语句体内部
template <typename T> using partNo = pair<T,unsigned> ;

int main() {
    Blob<int> ia , ia2 = { 0 , 1 , 2 , 3 , 4  } ;
    Blob<string> names ;
    Blob<double> prices ;

    Blob<string> articles = { "a" , "an" , "the" } ;

    Blob<int> squares = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;     // 实例化Blob<int>和接受initializer_list<int>的构造函数
    for( size_t i = 0 ; i != squares.size() ; ++i )
        squares[i] = i * i ;                                            // 实例化Blob<int>::operator[]( size_t )
    for( size_t i = 0 ; i != squares.size() ; ++i )
        cout << i << " " ;
    cout << endl;

    Blob<char> ca ;
    Blob<int> ia3 ;
    cout << ( ia == ia2 ? "ia == ia2" : "ia != ia2" ) << endl;
    cout << ( ia == ia3 ? "ia == ia3" : "ia != ia3" ) << endl;

    twin<string> authors = { "first" , "second" };
    twin<int> win_loss ;
    twin<double> area ;

    partNo<string> books = { "cpp primer 5ed"  , 30 } ;

    Foo<string> fs ;
    Foo<int> fi , fi2 , fi3 ;
    size_t ct = Foo<int>::count() ;     // 实例化Foo<int>::count
    ct = fi.count() ;                    // 使用Foo<int>::count
  //ct = Foo::count() ;                  // 错误：使用哪个模板实例的count
    return 0;
}
