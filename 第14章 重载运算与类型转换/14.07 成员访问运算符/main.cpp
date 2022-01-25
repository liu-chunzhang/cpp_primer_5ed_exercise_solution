// 本程序用于验证教材中14.7节内容的可靠性，并提供感性认知
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main() {
    StrBlob a1 = { "hi" , "bye" , "now" } ;
    StrBlobPtr p( a1 , 2 ) ;
    cout << p->size() << endl;
    *p = "okay" ;
    cout << p->size() << endl;
    cout << (*p).size() << endl;
    return 0;
}
