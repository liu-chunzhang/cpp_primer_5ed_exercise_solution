// ������������֤�̲���19.4.1�����ݵĿɿ��ԣ����ṩ������֪
#include "Screen.h"
using namespace std;

int main() {
    const string Screen::*pdata = Screen::data() ;

    Screen myScreen , *pScreen = &myScreen ;
    string s = myScreen.*pdata ;
    s = pScreen->*pdata ;
    return 0;
}
