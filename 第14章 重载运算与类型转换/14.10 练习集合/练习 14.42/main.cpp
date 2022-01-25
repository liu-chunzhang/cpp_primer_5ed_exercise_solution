// 本程序用于验证读者在练习14.42中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <iterator>
using namespace std;
using std::placeholders::_1 ;                                                                        // 多元函数需要占位符

int main() {
    /* (a) */
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 1024 , 2048 , 4096 } ;
    ostream_iterator<int> os( cout , " " ) ;                                                       // 定义输出流迭代器主要是配合泛型算法
    size_t i = count_if( ivec.cbegin() , ivec.cend() , bind( greater<int>() , _1 , 1024 ) ) ;        // 此处使用bind函数（教材P354）
    cout << i << endl;                                                                              // 此处打印ivec里大于1024的值的数目
    /* (b) */
    vector<string> svec = { "pooh" , "pooh" , "welcome" , "to" , "C++" , "pooh" , "family" } ;
    vector<string>::const_iterator iter = find_if( svec.cbegin() , svec.cend() , bind( not_equal_to<string>() , _1 , "pooh" ) ) ; // 关键是bind和占位符的应用
    cout << *iter << endl;                                                                           // 打印查看结果正误
    /* (c) */
    copy( ivec.cbegin() , ivec.cend() , os ) ;                                                      // 输出当前ivec里存的元素
    cout << endl;
    transform( ivec.begin() , ivec.end() , ivec.begin() , bind( multiplies<int>() , _1 , 2 ) ) ;  // transform是既写又写算法，配合bind
    copy( ivec.cbegin() , ivec.cend() , os ) ;                                                      // 输出当前ivec里存的元素作为对照
    return 0;
}
