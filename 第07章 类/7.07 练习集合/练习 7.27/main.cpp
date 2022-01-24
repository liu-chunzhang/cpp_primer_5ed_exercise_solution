// 本程序用于验证读者在练习7.27中的想法，并在必要的地方予以说明
#include "Screen.h"

int main() {
    Screen myscreen( 5 , 5 , 'X' ) ;
    myscreen.move( 4 , 0 ).set( '#' ).display( cout ) ;        // 这是真正合理的答案，完全符合题意，也符合于参考答案的预设
    cout << endl;
    myscreen.display( cout ) ;
    cout << endl;
    return 0;
}
