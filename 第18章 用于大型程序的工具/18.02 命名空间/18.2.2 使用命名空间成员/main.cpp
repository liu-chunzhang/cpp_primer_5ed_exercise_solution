// 本程序用于验证教材中18.2.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

namespace blip{
    int i = 16 , j = 15 , k = 23 ;
}

int j = 0 ;

void manip() ;

int main() {
    manip() ;
    cout << blip::i << " " << blip::j << " " << blip::k << endl;
    return 0;
}

void manip() {
    using namespace blip ;  // using指示，blip中的名字被“添加”到全局作用域中
    ++i ;                    // 将blip::i设定为17
  //++j ;                    // 二义性错误：是全局的j还是blip::j？
    ++::j ;                  // 正确：将全局的j设定为i
    ++blip::j ;              // 正确：将blip::j设定为16
    int k = 97 ;             // 当前局部的k隐藏了blip::k
    ++k ;                    // 将当前局部的k设定为98
}
