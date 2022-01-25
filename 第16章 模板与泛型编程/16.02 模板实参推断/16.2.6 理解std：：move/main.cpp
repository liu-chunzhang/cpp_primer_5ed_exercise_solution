// 本程序用于验证教材中16.2.6节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

template <typename T> typename remove_reference<T>::type&& move( T &&t ) ;

int main() {
    string s1( "hi!" ) , s2 ;
    s2 = std::move( string( "bye!" ) ) ;        // 正确：从一个右值移动数据。机理是运行了 string&& move( string && )
    cout << s1 << " " << s2 << endl;
    s2 = std::move( s1 ) ;                       // 正确：但赋值以后，s1的值不确定.机理是运行了 string&& move( string & )
    cout << s1 << " " << s2 ;
    return 0;
}

template <typename T> typename remove_reference<T>::type&& move( T &&t ) {
    return static_cast<typename remove_reference<T>::type&&>( t ) ;
}
