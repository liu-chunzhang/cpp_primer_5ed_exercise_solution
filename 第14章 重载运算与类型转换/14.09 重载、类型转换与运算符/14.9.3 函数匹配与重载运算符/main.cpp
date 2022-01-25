// 本程序用于验证教材中14.52节内容的可靠性，并提供感性认知
#include "SmallInt.h"

int main() {
    SmallInt s1( 3 ) , s2( 4 ) ;
    SmallInt s3 = s1 + s2 ;         // 使用重载的operator+
    int i = s3 + 0 ;                // 二义性错误
    return 0;
}
