// ������������֤�̲���7.5.6�����ݵĿɿ��ԣ����ṩ������֪
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
