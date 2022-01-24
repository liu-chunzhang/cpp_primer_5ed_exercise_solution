// 本程序用于验证教材中5.4.4节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main() {
    string rsp ;
    do{
        cout << "请输入两个值：" ;
        int val1 = 0 , val2 = 0 ;
        cin >> val1 >> val2 ;
        cout << val1 << "和" << val2 << "的和为" << val1 + val2 << endl;
        cout << "请问还要输入更多吗？不想则按N表示结束。" << endl;
        cin >> rsp ;
    }while( !rsp.empty() && rsp[0] != 'N' );
    return 0;
}
