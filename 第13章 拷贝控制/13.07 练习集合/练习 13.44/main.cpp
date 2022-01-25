// 本程序用于验证读者在练习13.44中的想法，并在必要的地方予以说明
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
