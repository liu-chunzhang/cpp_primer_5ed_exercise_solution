// ������������֤��������ϰ12.19�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
