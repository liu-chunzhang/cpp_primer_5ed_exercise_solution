// 本程序用于验证读者在练习14.16中的想法，并在必要的地方予以说明
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "String.h"
#include "StrVec.h"

int main() {
    String str1 = "hello" , str2 = "hiya" , str3 = "hello" ;
    cout << ( str1 == str2 ? "str1 == str2" : "str1 != str2" ) << endl;
    cout << ( str1 == str3 ? "str1 == str3" : "str1 != str3" )  << endl;

    StrVec svec1 , svec2 , svec3 ;
    svec1.push_back( "hello" ) ; svec1.push_back( "world" ) ;
    svec2.push_back( "hiya" ) ; svec2.push_back( "C++ family" ) ;
    svec3.push_back( "hello" ) ; svec3.push_back( "world" ) ;
    cout << ( svec1 == svec2 ? "svec1 == svec2" : "svec1 != svec2" ) << endl;
    cout << ( svec1 == svec3 ? "svec1 == svec3" : "svec1 != svec3" )  << endl;

    StrBlob strblob1 , strblob2 , strblob3 ;
    strblob1.push_back( "hello" ) ; strblob1.push_back( "world" ) ;
    strblob2.push_back( "hiya" ) ; strblob2.push_back( "C++ family" ) ;
    strblob3.push_back( "hello" ) ; strblob3.push_back( "world" ) ;
    cout << ( strblob1 == strblob2 ? "strblob1 == strblob2" : "strblob1 != strblob2" ) << endl;
    cout << ( strblob1 == strblob3 ? "strblob1 == strblob3" : "strblob1 != strblob3" )  << endl;

    StrBlobPtr strblobptr1( strblob1 , 3 ) , strblobptr2( strblob2 , 3 ) , strblobptr3( strblob1 , 3 ) ;
    cout << ( strblobptr1 == strblobptr2 ? "strblobptr1 == strblobptr2" : "strblobptr1 != strblobptr2" ) << endl;
    cout << ( strblobptr1 == strblobptr3 ? "strblobptr1 == strblobptr3" : "strblobptr1 != strblobptr3" )  << endl;
    return 0 ;
}
