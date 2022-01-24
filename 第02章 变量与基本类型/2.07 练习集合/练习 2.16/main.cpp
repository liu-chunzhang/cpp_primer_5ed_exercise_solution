// 本程序用于验证读者在练习2.16中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i = 0 , &r1 = i ;
    double d = 0 , &r2 = d;
    r2 = 3.14159;                                 // 此处给r2赋值，实际上是给所引用的d赋值，可以通过运行程序，输出结果验证这一点
    cout << d << endl;
    r2 = r1 ;                                     // 同理，这里实际是把i的数值赋予了d
    cout << d << endl;
    d = 3.14;
    i = r2 ;                                      // 此处是将d的值又赋予了i，但是需要注意到i是整型，而d是双精度浮点数，这一过程可能会
    cout << i << endl;                           // 有精度损失（窄化操作）！所以我特地打出两次输出，提醒读者这一点
    cout << d << endl;
    r1 = d ;                                      // 同理，此处也是窄化操作！
    cout << i << endl;
    cout << d << endl;
    return 0;
}
