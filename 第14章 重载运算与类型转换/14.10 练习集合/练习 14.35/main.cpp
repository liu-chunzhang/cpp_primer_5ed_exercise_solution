// 本程序用于验证读者在练习14.35中的想法，并在必要的地方予以说明
#include <fstream>
#include "PrintString2.h"

int main() {
    ifstream in( "data.txt" ) ;
    PrintString2 print( in ) ;
    cout << print() << endl;
    return 0;
}
