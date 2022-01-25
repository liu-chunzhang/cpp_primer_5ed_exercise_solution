// 本程序用于验证读者在练习16.15中的想法，并在必要的地方予以说明
#include "Screen.h"

int main() {
    Screen<5,3> myScreen( 'A' ) ;
    cin >> myScreen ;
    cout << myScreen << endl;
    return 0;
}
