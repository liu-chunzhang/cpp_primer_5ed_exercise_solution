// ������������֤��������ϰ12.20�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "StrBlobPtr.h"
#include <fstream>
using namespace std;

int main() {
    StrBlob b ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( getline( in , str ) )
        b.push_back( str ) ;
    for( StrBlobPtr it = b.begin() ; it != b.end() ; ++it )
        cout << *it << endl;
    return 0;
}
