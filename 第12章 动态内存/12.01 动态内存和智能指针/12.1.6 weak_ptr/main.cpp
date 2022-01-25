// 本程序用于验证教材中12.1.6节内容的可靠性，并提供感性认知
#include "StrBlobPtr.h"

int main() {
    shared_ptr<int> ip = make_shared<int>( 42 ) ;
    weak_ptr<int> wp( ip ) ;
    return 0;
}
