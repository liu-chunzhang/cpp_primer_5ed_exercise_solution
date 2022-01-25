// 本程序用于验证读者在练习13.40中的想法，并在必要的地方予以说明
#include "StrVec.h"

int main() {
    StrVec svec = { "hello" , "welcome" , "to" , "C++" , "family" } ;
    cout << svec.size() << " " << svec.capacity() << endl;
    return 0;
}
