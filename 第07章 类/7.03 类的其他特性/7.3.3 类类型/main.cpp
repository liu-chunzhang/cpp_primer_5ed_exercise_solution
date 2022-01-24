// 本程序用于验证教材中7.3.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

class Screen ;
class Link_screen ;

int main() {

    return 0;
}

class Link_screen{
    private:
        Screen window ;                   // 由于Screen是不完全类型，所以编译不被通过
        Link_screen *next ;
        Link_screen *prev ;
};
