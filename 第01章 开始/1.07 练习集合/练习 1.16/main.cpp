// 本程序用于验证读者在练习1.16中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main(){
    double sum = 0 , value = 0 ;
    cout << "请输入一组双精度浮点数，按Ctrl+C键表示结束：" << endl;
    while( cin >> value )                                              // 此处用while循环而不用for循环，因为这属于次数无法预知的情况，
        sum += value ;                                                  // 相对更便利一点
    cout << "输入所有双精度浮点数的和为" << sum << "。" << endl;
    return 0;
}
