// ������������֤��������ϰ13.26�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "StrBlob.h"

int main() {
    StrBlob b1 ;
    {
        StrBlob b2 = { "a" , "an" , "the" } ;
        b1 = b2 ;
        b2.push_back( "about" ) ;
        cout << "b2�Ĵ�СΪ" << b2.size() << endl;
        cout << "b2����βԪ��Ϊ" << b2.front() << " " << b2.back() << endl;
    }
    cout << "b1�Ĵ�СΪ" << b1.size() << endl;
    cout << "b1����βԪ��Ϊ" << b1.front() << " " << b1.back() << endl;
    StrBlob b3 = b1 ;
    b3.push_back( "next" ) ;
    cout << "b3�Ĵ�СΪ" << b3.size() << endl;
    cout << "b3����βԪ��Ϊ" << b3.front() << " " << b3.back() << endl;
    cout << "b1�Ĵ�СΪ" << b1.size() << endl;
    cout << "b1ȫ��Ԫ�أ�" ;
    for( size_t i = 0 ; i != b1.size() ; ++i )
        cout << b1.print( i ) << " " ;
    return 0;
}
