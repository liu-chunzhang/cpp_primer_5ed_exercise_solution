// ������������֤�̲���7.3.1�����ݵĿɿ��ԣ����ṩ������֪
#include "Screen.h"

int main() {
    Screen myscreen ;
    char ch = myscreen.get() ;
    ch = myscreen.get( 1 , 5 ) ;
    cout << ch << endl;
    return 0;
}
