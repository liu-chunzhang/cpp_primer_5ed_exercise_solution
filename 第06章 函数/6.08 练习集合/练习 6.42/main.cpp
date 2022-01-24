// 本程序用于验证读者在练习6.42中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

string make_plural( size_t ctr , const string &word , const string &ending = "s" ) ;

int main() {
    cout << "success的单数形式为" << make_plural( 1 , "success" , "es" ) << endl;           // success的复数是successes
    cout << "success的复数形式为" << make_plural( 2 , "success" , "es" ) << endl;
    cout << "failure的单数形式为" << make_plural( 1 , "failure" ) << endl;                  // failure的复数是failures
    cout << "failure的复数形式为" << make_plural( 2 , "failure" ) << endl;
    return 0;
}

string make_plural( size_t ctr , const string &word , const string &ending ) {           // 必须赋予这个默认形参，否则没法消去不需要的参数
    return ( ctr > 1 ) ? word + ending : word ;
}
