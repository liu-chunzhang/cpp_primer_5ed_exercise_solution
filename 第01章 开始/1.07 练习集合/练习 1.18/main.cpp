// 本程序用于验证读者在练习1.18中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int currVal = 0 , val = 0 ;
    if( cin >> currVal ){
        int cnt = 1 ;
        while( cin >> val ){
            if( val == currVal )
                ++cnt ;
            else{
                cout << currVal << " occurs " << cnt << " times." << endl;
                cnt = 1 , currVal = val ;
            }
        }
        cout << currVal << " occurs " << cnt << " times." << endl;
    }
    else
        cout << "No integer data was entered." << endl;
    return 0;
}
