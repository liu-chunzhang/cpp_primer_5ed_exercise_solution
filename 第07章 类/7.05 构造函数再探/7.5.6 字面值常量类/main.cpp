// 本程序用于验证教材中7.5.6节内容的可靠性，并提供感性认知
#include "Debug.h"

int main() {
    constexpr Debug bug( false , true , false ) ;
    if( bug.any() )
        cerr << "print appropriate error message" << endl;
    constexpr Debug prod( false ) ;
    if( prod.any() )
        cerr << "print an error message" << endl;
    return 0;
}
