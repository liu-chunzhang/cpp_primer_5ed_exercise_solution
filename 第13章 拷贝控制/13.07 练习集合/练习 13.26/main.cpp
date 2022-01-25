// 本程序用于验证读者在练习13.26中的想法，并在必要的地方予以说明
#include "StrBlob.h"

int main() {
    StrBlob b1 ;
    {
        StrBlob b2 = { "a" , "an" , "the" } ;
        b1 = b2 ;
        b2.push_back( "about" ) ;
        cout << "b2的大小为" << b2.size() << endl;
        cout << "b2的首尾元素为" << b2.front() << " " << b2.back() << endl;
    }
    cout << "b1的大小为" << b1.size() << endl;
    cout << "b1的首尾元素为" << b1.front() << " " << b1.back() << endl;
    StrBlob b3 = b1 ;
    b3.push_back( "next" ) ;
    cout << "b3的大小为" << b3.size() << endl;
    cout << "b3的首尾元素为" << b3.front() << " " << b3.back() << endl;
    cout << "b1的大小为" << b1.size() << endl;
    cout << "b1全部元素：" ;
    for( size_t i = 0 ; i != b1.size() ; ++i )
        cout << b1.print( i ) << " " ;
    return 0;
}
