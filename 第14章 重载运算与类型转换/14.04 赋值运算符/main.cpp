// ������������֤�̲���14.4�����ݵĿɿ��ԣ����ṩ������֪
#include "StrVec.h"
#include "Sales_data.h"

int main() {
    StrVec svec ;
    svec = { "a" , "an" , "the" } ;
    for( const string &s : svec )
        cout << s << " " ;
    cout << endl;
    return 0;
}
