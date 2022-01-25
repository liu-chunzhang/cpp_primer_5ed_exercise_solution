// 本程序用于验证教材中16.2.3节内容的可靠性，并提供感性认知
#include "Blob.h"
#include <type_traits>

template <typename It> auto fcn( It beg , It ter ) -> decltype( *beg ) ;     // 尾置返回允许我们在参数列表之后声明返回类型
template <typename It> auto fcn2( It beg , It ter ) -> typename remove_reference<decltype(*beg)>::type ;

int main() {
    vector<int> ivec = { 1 , 2 , 3 , 4 , 5 } ;
    int i = fcn( ivec.cbegin() , ivec.cend() ) ;                                   // fcn此时返回int&
    Blob<string> sblob = { "hi" , "bye" } ;
    string s = fcn( sblob.begin() , sblob.end() ) ;                                  // fcn此时返回string&
    cout << i << " " << s ;
    return 0;
}

template <typename It> auto fcn( It beg , It ter ) -> decltype( *beg ) {     // 处理序列
    return *beg ;                                                              // 返回序列中的一个元素的引用
}

template <typename It> auto fcn2( It beg , It ter ) -> typename remove_reference<decltype(*beg)>::type {
    return *beg ;
}
