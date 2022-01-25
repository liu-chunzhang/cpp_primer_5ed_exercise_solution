// 本程序用于验证教材中19.4.1节内容的可靠性，并提供感性认知
#include "Screen.h"
using namespace std;

int main() {
    const string Screen::*pdata = Screen::data() ;

    Screen myScreen , *pScreen = &myScreen ;
    string s = myScreen.*pdata ;
    s = pScreen->*pdata ;
    return 0;
}
