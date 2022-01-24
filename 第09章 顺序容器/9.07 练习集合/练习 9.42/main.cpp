// 本程序用于验证读者在练习9.42中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

void input_string( string &s ) ;

int main() {
    string s ;
    input_string( s ) ;
    cout << s << endl;
}

void input_string( string &s ) {
    s.reserve( 100 ) ;               // 由于事先直到要至少读取100个字符，因此可以用reverse先为string分配100个字符的空间，然后逐个读取字符，
    char c ;                        // 再用push_back添加到string末尾
    while( cin >> c )
        s.push_back( c ) ;
}
