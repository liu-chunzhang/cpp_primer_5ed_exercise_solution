// 本程序用于验证教材中7.3.1节内容的可靠性，并提供感性认知
#include "Screen.h"

int main() {
    Screen myscreen ;
    char ch = myscreen.get() ;
    ch = myscreen.get( 1 , 5 ) ;
    cout << ch << endl;
    return 0;
}
