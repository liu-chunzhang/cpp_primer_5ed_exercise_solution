// ������������֤��������ϰ19.2�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "StrVec.h"

int main() {
    StrVec svec1 = { "hello" , "welcome" , "to" , "C++" , "family" } , svec2( svec1 ) ;
    svec2.push_back( "!" ) ;
    for( const string &s : svec2 )
        cout << s << " " ;
    return 0;
}
