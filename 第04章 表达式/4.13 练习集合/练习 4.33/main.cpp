// 本程序用于验证读者在练习4.33中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;  // C++规定条件运算符的优先级高于逗号运算符，所以someValue ? ++x , ++y ; --x , --y实际上等价于(someValue? ++x, ++y ; --x), --y

int main() {
    int x = 10 , y = 20 ;
    bool someValue = true ;                               // 它的求值过程是，首先判断someValue是否为真，如果为真，依次执行++x和++y，最后执
    someValue ? ++x , ++y : --x , --y ;                    // 行--y；如果为假，执行--x和--y。
    cout << x << " " << y << endl;

    x = 10 , y = 20 ;
    someValue = false ;
    someValue ? ++x , ++y : --x , --y ;
    cout << x << " " << y << endl;
    return 0;
}
