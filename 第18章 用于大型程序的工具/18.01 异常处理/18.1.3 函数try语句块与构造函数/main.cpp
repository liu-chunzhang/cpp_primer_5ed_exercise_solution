// 本程序用于验证教材中18.1.3节内容的可靠性，并提供感性认知
#include "Blob.h"

int main() {
    Blob<string> sblob = { "hello" , "welcome" , "to" , "C++" , "world" } ;
    cout << sblob[3] << endl;
    return 0;
}
