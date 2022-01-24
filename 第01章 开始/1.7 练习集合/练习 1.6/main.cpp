// 本程序用于验证读者在练习1.6中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    cout << "请输入两个双精度浮点数：" << endl;
    double v1 = 0 , v2 = 0 ;
    cin >> v1 >> v2 ;
    cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

    /*cout << "The sum of " << v1 ;               // 前两行的末尾有分号，表示语句结束，第2、3行为两条新的语句。而这两条语句在“<<”之前缺少了输出流，应在“<<”之前加上“cout”
          << " and " << v2 ;                      // 也可以像是上面的代码一样，串联以共享输出流函数
          << " is " << v1 + v2 << endl;*/

    return 0;
}
