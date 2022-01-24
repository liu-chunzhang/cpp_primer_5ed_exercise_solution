// // 本程序用于验证读者在练习3.5中的想法，并在必要的地方予以说明：从标准输入中读入多个字符串并将它们连接在一切
#include <iostream>
using namespace std;

int main() {
    string total , trans ;
    cout << "请输入你要相加的字符串，按回车表示输入，按Ctrl+C键终止输入：" << endl;      // 与参考答案不太一样，我此处需要按Ctri+C键才能够强制
    if( cin >> total ){                                                                  // 跳出，标准答案设置了主动选择跳出栏。
        while( cin >> trans )
            total += trans;
        cout << total << endl;
    }
    else                                                                                  // 相应的，我这里即使没有输入，也可以告诉使用者没有有
        cout << "未检测到输入！" << endl;                                                 // 效输入，这里是没有逻辑问题的。相应的，我没有强制第
    return 0;                                                                             // 一次输入必须有有效字符串。
}
