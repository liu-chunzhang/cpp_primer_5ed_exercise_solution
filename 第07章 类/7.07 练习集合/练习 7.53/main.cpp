// ������������֤��������ϰ7.53�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Debug.h"

int main() {
    constexpr Debug io_sub( false , true , true , false ) ;
    if( io_sub.any() )
        cerr << "print appropriate error message" << endl;
    constexpr Debug prod( false ) ;
    if( prod.any() )
        cerr << "print an error message" << endl;
    return 0;
}
