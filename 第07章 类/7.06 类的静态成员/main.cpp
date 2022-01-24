// 本程序用于验证教材中7.6节内容的可靠性，并提供感性认知
#include "Account.h"

int main() {
    double r = Account::rate() ;

    Account ac1 , *ac2 = &ac1 ;
    r = ac1.rate() ;           // 通过Account的对象或引用
    r = ac2->rate() ;          // 通过指向Account对象的指针
    cout << r ;
    return 0;
}
