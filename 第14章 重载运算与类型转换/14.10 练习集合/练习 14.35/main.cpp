// ������������֤��������ϰ14.35�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include "PrintString2.h"

int main() {
    ifstream in( "data.txt" ) ;
    PrintString2 print( in ) ;
    cout << print() << endl;
    return 0;
}
