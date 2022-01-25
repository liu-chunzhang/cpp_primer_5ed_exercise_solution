// 本程序用于验证教材中19.2.2节内容的可靠性，并提供感性认知
#include "Base.h"
using namespace std;

int main() {
    Derived *dp = new Derived ;
    Base *bp = dp ;
    if( typeid( *bp ) == typeid( *dp ) )
        std::cout << "typeid( *bp ) == typeid( *dp )" << std::endl;
    if( typeid( *bp ) == typeid( Derived ) )
        std::cout << "typeid( *bp ) == typeid( Derived )" << std::endl;
    return 0;
}
