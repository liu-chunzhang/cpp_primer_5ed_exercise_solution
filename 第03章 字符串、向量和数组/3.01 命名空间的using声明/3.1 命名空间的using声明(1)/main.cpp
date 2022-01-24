// 本程序用于验证教材中3.1节内容的可靠性，并提供感性认知
#include <iostream>
using std::cin;                            // using声明，当我们使用名字cin时，从命名空间std中获取它
// using namespace::std;                    // 其实，前面几乎所有程序都用的这一行代码是using指示，而上一行是using声明。using指示的详细内容见
                                            // 教材P702的“using指示”一节。为了凸显using声明的威力，我们先隐去这一行

int main() {
    int i ;
    cin >> i ;                              // 正确：cin和std::cin含义相同
    cout << i ;                             // 错误：没有对应的using声明，必须使用完整的名字
    std::cout << i;                        // 正确：显式地从std中使用cout
    return 0;
}
