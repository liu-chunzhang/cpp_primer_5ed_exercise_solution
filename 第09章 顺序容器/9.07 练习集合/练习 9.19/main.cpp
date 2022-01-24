// 本程序用于验证读者在练习9.19中的想法，并在必要的地方予以说明
#include <iostream>
#include <list>
using namespace std;

int main() {
    string str ;
    list<string> slst ;
    while( cin >> str )
        slst.push_back( str );
    for( list<string>::const_iterator iter = slst.cbegin() ; iter != slst.cend() ; ++iter )
        cout << *iter << " " ;
    return 0;
}
