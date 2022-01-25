// 本程序用于验证读者在练习12.19中的想法，并在必要的地方予以说明
#include "StrBlobPtr.h"
using namespace std;

int main() {
    StrBlob b1 ;
    {
        StrBlob b2 ;
        b1 = b2 ;
        b2.push_back( "about" ) ;
        cout << b2.size() << " ";
    }
    cout << b1.size() << endl;
    cout << b1.front() << " " << b1.back() << endl;
    const StrBlob b3 = b1 ;
    cout << b3.front() << " " << b3.back() << endl;
    for( auto it = b1.begin() ; it != b1.end() ; ++it )
        cout << *it << endl;
    return 0;
}
