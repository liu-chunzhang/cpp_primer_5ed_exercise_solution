// ������������֤�̲���9.6�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>                                    // Ҫʹ������������Ҫ��������ͷ�ļ���
#include <deque>                                       // #include <stack>          //stack
#include <stack>                                       // #include<queue>           //queue��priority_queue
#include <vector>
using namespace std;

int main() {
    deque<int> deq ;
    stack<int> stk( deq ) ;

    stack<string,vector<string>> str_stk ;             // ��vector��ʵ�ֵĿ�ջ
    vector<string> svec;
    stack<string,vector<string>> str_stk2( svec ) ;    // str_stk2��vector��ʵ�֣���ʼ��ʱ����svec�Ŀ���

    stack<int> intStack ;                             // ��ջ
    for( size_t ix = 0 ; ix != 10 ; ++ix )            // ����ջ
        intStack.push( ix ) ;                          // intStack������0~9��һ��10����
    while( !intStack.empty() ){                       // intStack����ֵ�ͼ���ѭ��
        int value = intStack.top() ;                  // ʹ��ջ��ֵ
        cout << value << " " ;                        // ��ӡ��ջ��ֵ
        intStack.pop() ;                              // ����ջ��Ԫ�أ�����ѭ��
    }
    return 0;
}
