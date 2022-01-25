// 本程序用于验证教材中14.4节内容的可靠性，并提供感性认知
#include "StrVec.h"
#include "Sales_data.h"

int main() {
    StrVec svec ;
    svec = { "a" , "an" , "the" } ;
    for( const string &s : svec )
        cout << s << " " ;
    cout << endl;
    return 0;
}
