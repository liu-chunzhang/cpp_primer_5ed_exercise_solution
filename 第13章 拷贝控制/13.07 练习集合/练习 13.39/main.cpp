// ������������֤��������ϰ13.39�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include "StrVec.h"

int main() {
    StrVec svec ;
    ifstream in( "data.txt" ) ;
    string str ;
    while( in >> str )
        svec.push_back( str ) ;
    cout << svec.size() << " " << svec.capacity() << endl;
    svec.resize( 20 ) ;
    cout << svec.size() << " " << svec.capacity() << endl;

    return 0;
}
