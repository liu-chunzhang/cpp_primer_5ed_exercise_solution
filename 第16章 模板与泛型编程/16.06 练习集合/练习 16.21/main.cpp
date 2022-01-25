// 本程序用于验证读者在练习16.21中的想法，并在必要的地方予以说明
#include "DebugDelete.h"

int main() {
    int *p = new int( 3 ) ;
    DebugDelete()( p ) ;
    return 0;
}
