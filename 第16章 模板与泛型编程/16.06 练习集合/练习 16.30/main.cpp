// ������������֤��������ϰ16.30�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Blob.h"

int main() {
    Blob<string> b1 ;
    cout << b1.size() << endl;
    {
        Blob<string> b2{ "a" , "an" , "the" } ;
        b1 = b2 ;
        b2.push_back( "about" ) ;
        cout << b1.size() << " " << b2.size() << endl;
    }
    cout << b1.size() << " " << b1.capacity() << " " << b1.empty() << endl;
    for( size_t i = 0 ; i < b1.size() ; ++i )
        cout << b1.at( i ) << " " ;
    cout << endl;
    cout << b1.front() << " " << b1.back() << endl;
    cout << b1[2] << endl;
    return 0;
}
