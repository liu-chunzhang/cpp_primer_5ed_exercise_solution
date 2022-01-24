// 本程序用于验证教材中4.6节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string s1 = "a string", *p = &s1 ;
    size_t n = s1.size() ;               // 运行string对象s1的size成员，同时auto用size_t换掉了
    n = (*p).size() ;                    // 运行p所指对象的size成员
    n = p->size() ;                      // 等价于(*p).size()
    cout << n << endl;
    auto m = p.size() ;                   // 错误：p是一个指针，没有名为size的成员
    return 0;
}
