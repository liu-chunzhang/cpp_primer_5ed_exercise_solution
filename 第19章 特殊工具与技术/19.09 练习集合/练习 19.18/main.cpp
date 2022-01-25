// 本程序用于验证读者在练习19.18中的想法，并在必要的地方予以说明
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
using std::placeholders::_1 ;

int main() {
    vector<string> svec = { "hello" , "welcome" , "" , "" , "to" , "C++" , "" , "family" } ;
    cout << count_if( svec.cbegin() , svec.cend() , bind( &string::empty , _1 ) ) << endl;
    return 0;
}
