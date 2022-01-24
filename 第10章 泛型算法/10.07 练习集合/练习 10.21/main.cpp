// 本程序用于验证读者在练习10.21中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

void get_int_to_0( int i ) ;

int main() {
    int i = 5 ;
    get_int_to_0( i ) ;
    return 0;
}

void get_int_to_0( int i ){
    auto f = [ i ]() mutable -> bool { if( i != 0 ) { --i ;  return false ; } else return true ; } ;
    for( int k = 0 ; k <= i ; ++k )
        cout << f() << " " ;
    cout << endl;
}

// lambda表达式中的i获取了变量i在初期的拷贝，但是之后执行自增操作的是lambda表达式中的变量i，而不是函数体内的变量i！这才是lambda表达式的传值的意思。
