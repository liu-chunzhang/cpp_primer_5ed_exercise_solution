// 本程序用于验证读者在练习13.47中的想法，并在必要的地方予以说明
#include "String.h"

int main() {
    String s1( "first" ) , s2( "second" ) ;
    cout << "1 " << s1 << " " << s2 << endl;
    String s3( s1 ) ;
    cout << "2 " << s1 << " " << s2 << " " << s3 << endl;
    s3 = s2 ;
    cout << "3 " << s1 << " " << s2 << " " << s3 << endl;
    s3 = String( "third" ) ;
    cout << "4 " << s1 << " " << s2 << " " << s3 << endl;
    return 0;
}
