// 本程序用于验证教材中5.4.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string s{ "Welcome to C++ family!" } ;
    for( string::size_type index = 0 ; index != s.size() ; ++index ){   // 教材中的decltype(s,size())类型是string::size_type
        s[index] = toupper( s[index] ) ;                                  // 在用下标访问元素时，vector使用vector<T>::size_type作为下标类型，
        cout << s[index] ;                                                // 而数组下标的正确类型则是size_t（教材P103）
    }                                                                     // 为了使自己的程序有很好的移植性，C++程序员应该尽量使用size_t和
    return 0;                                                            // size_type而不是int或unsigned。
}
