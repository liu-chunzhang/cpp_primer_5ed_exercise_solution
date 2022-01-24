// 本程序用于验证读者在练习3.28中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

string sa[10] ;
int ia[10];

int main() {
    string sa2[10] ;
    int ia2[10];
    for( size_t i = 0 ; i != 10 ; ++i )
        cout << sa[i] << " " << ia[i] << " " << sa2[i] << " " << ia2[i] << endl;
    return 0;
}
