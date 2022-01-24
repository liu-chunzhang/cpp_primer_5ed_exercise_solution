// 本程序用于验证读者在练习3.5中的想法，并在必要的地方予以说明：从标准输入中读入多个字符串，并将它们用空格隔开
#include <iostream>
using namespace std;

int main() {
    string total , trans ;
    cout << "请输入您的多个字符串，按回车确认输入，按Ctrl+C键表示输入停止：" << endl;     // 与参考答案不太一样，我此处需要按Ctri+C键才能够强制
    if( cin >> total ){                                                                   // 跳出，标准答案设置了主动选择跳出栏。
       while( cin >> trans )
            total = total + " " + trans;
       cout << "拼接后用空格隔开的的字符串为：" << total << endl;
    }
    else                                                                                   // 相应的，我这里即使没有输入，也可以告诉使用者没有有
       cout << "未检测到输入！" << endl;                                                   // 效输入，这里是没有逻辑问题的。相应的，我没有强制第
    return 0;                                                                              // 一次输入必须有有效字符串。
}
