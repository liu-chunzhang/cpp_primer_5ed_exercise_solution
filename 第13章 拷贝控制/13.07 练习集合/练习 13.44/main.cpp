// ������������֤��������ϰ13.44�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "String.h"

int main() {
    String s( "hello" ) ;
    cout << s.size() << " " << s << endl;
    s += static_cast<String>( "world!" ) ;
    decltype( s ) *p = &s ;
    if( p )
        cout << s.size() << " " << s << endl;
    return 0;
}
