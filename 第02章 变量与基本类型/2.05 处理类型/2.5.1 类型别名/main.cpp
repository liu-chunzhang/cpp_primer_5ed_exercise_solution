// 本程序用于验证教材中2.5.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

typedef double wages ;                  // wages是double的同义词
typedef wages base , *p ;               // 现在base是double的同义词，p是double*的同义词
typedef char *pstring ;

int main() {
    base hourly = 3.0 , weekly = 2.99 ;
    p q ;
    q = &hourly ;

    using in = int ;
    in i = 42 ;

    const pstring cstr = 0 ;
    const pstring *ps ;

    return 0;
}
