// 本程序用于验证教材中19.4.3节内容的可靠性，并提供感性认知
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
using std::placeholders::_1 ;

int main() {
    vector<string> svec = { "hello" , "welcome" , "to" , "" , "C++" , "family" } ;
    function<bool (const string&)> fcn = &string::empty ;
    if( find_if( svec.cbegin() , svec.cend() , fcn ) != svec.cend() )
        cout << "Find empty string success!" << endl;
    else
        cout << "Find empty string falled." << endl;

    vector<string> svec2 = { "hello" , "welcome" , "to" , "C++" , "family" } ;
    if( find_if( svec2.cbegin() , svec2.cend() , mem_fn( &string::empty ) ) != svec2.cend() )
        cout << "Find empty string success!" << endl;
    else
        cout << "Find empty string falled." << endl;

    vector<string> svec3 = { "hello" , "welcome" , "to" , "C++" , "family" } ;
    if( find_if( svec3.cbegin() , svec3.cend() , bind( &string::empty , _1 ) ) != svec3.cend() )
        cout << "Find empty string success!" << endl;
    else
        cout << "Find empty string falled." << endl;
    return 0;
}
