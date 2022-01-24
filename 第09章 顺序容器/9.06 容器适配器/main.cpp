// 本程序用于验证教材中9.6节内容的可靠性，并提供感性认知
#include <iostream>                                    // 要使用适配器，需要加入以下头文件：
#include <deque>                                       // #include <stack>          //stack
#include <stack>                                       // #include<queue>           //queue、priority_queue
#include <vector>
using namespace std;

int main() {
    deque<int> deq ;
    stack<int> stk( deq ) ;

    stack<string,vector<string>> str_stk ;             // 在vector上实现的空栈
    vector<string> svec;
    stack<string,vector<string>> str_stk2( svec ) ;    // str_stk2在vector上实现，初始化时保存svec的拷贝

    stack<int> intStack ;                             // 空栈
    for( size_t ix = 0 ; ix != 10 ; ++ix )            // 堆满栈
        intStack.push( ix ) ;                          // intStack保存了0~9，一共10个数
    while( !intStack.empty() ){                       // intStack中有值就继续循环
        int value = intStack.top() ;                  // 使用栈顶值
        cout << value << " " ;                        // 打印出栈顶值
        intStack.pop() ;                              // 弹出栈顶元素，继续循环
    }
    return 0;
}
