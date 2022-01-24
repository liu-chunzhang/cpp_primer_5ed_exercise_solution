// 本程序用于验证读者在练习6.33中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

void add_string( vector<string> s , size_t index ) ;

int main() {
    vector<string> svec{ "Hello" , "   " , "C++ world" , "!" } ;
    add_string( svec , 0 );
    return 0;
}

void add_string( vector<string> s , size_t index ) {
    if( index != s.size() && !s.empty() ) {
        cout << s[index++] ;
        add_string( s , index ) ;
    }
}
