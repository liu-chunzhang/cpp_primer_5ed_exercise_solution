// ������������֤�̲���19.2.2�����ݵĿɿ��ԣ����ṩ������֪
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
