// ������������֤��������ϰ16.24�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <vector>
#include "Blob.h"

int main() {
    vector<string> b1 = { "welcome" , "to" , "C++" , "family" } ;
    Blob<string> b3( b1.begin() , b1.end() ) ;
    for( BlobPtr<string> p = b3.begin() ; p != b3.end() ; ++p )
        cout << *p << " " ;
    return 0;
}
