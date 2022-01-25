// 本程序用于验证读者在练习14.18中的想法，并在必要的地方予以说明
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "StrVec.h"
#include "String.h"

int main() {
    String  s1( "hello" ) , s2( "hiya" ) , s3( "hello" ) ;
    cout << ( s1 < s2 ? s1 : s2 ) << endl;
    if( s1 < s3 )
        cout << "s1 < s3" << endl;
    if( s1 > s3 )
        cout << "s1 > s3" << endl;
    if( s1 <= s3 )
        cout << "s1 <= s3" << endl;
    if( s1 >= s3 )
        cout << "s1 >= s3" << endl;
    return 0;
}
