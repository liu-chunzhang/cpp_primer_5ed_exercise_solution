// 本程序用于验证读者在练习9.41中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> cvec = { 'H' , 'e' , 'l' , 'l' , 'o' } ;
    string str( cvec.cbegin() , cvec.cend() ) ;
    cout << str << endl;
    return 0;
}
