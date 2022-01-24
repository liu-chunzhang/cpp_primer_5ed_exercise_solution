// 本程序用于验证读者在练习9.18中的想法，并在必要的地方予以说明
#include <iostream>
#include <deque>
using namespace std;

int main() {
    string str ;
    deque<string> sdeq ;
    while( cin >> str )
        sdeq.push_back( str );
    for( deque<string>::const_iterator iter = sdeq.cbegin() ; iter != sdeq.cend() ; ++iter )
        cout << *iter << " " ;
    return 0;
}
