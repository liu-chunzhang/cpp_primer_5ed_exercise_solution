// 本程序用于验证读者在练习16.28中的想法，并在必要的地方予以说明
#include "Shared_ptr.h"
#include "Unique_ptr.h"

int main() {
    Shared_ptr<string> sp1 = new string( "welcome to C++ family" ) ;
    Shared_ptr<string> sp2 = sp1 ;
    *sp2 = "hiya!" ;
    cout << "*sp11 = " << *sp1 << endl;
    cout << "*sp12 = " << *sp2 << endl;
    cout << sp2.use_count() << endl;

    Shared_ptr<string> sp3( move( sp1 ) ) ;
    sp3 = move( sp2 ) ;

    cout << sp3.use_count() << endl;
    Shared_ptr<string> sp4 = move( sp3 ) ;
    cout << boolalpha << sp4.unique() << endl;

    Unique_ptr<string> up1 = new string( "Nice to meet you" ) ;
    cout << *up1 << endl;
    Unique_ptr<string> up2( move( up1 ) ) , up3 ;
    cout << *up2 << endl;
    up3 = move( up2 ) ;
    cout << *up3 << endl;
    return 0;
}
