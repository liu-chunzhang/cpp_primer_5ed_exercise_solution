// 本程序用于验证读者在练习13.27中的想法，并在必要的地方予以说明
#include "HasPtr.h"

int main() {
    HasPtr h1( "hello world!" ) , h2 = h1 ;                   // 由于未分配新的string，h2和h1指向相同的string
    h1 = "welcome to C++ family!" ;
    cout << "h1: " << *h1 << endl;
    cout << "h2: " << *h2 << endl;
    return 0;
}
