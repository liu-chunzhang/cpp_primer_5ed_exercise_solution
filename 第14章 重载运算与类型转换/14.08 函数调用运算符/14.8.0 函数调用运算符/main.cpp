// ������������֤�̲���14.8.0�����ݵĿɿ��ԣ����ṩ������֪
#include <algorithm>
#include <vector>
#include "absInt.h"
#include "PrintString.h"

int main() {
    int i = -42 ;
    absInt absObj ;
    int ui = absObj( i ) ;
    cout << ui << endl;

    string s = "hiya" ;
    PrintString printer ;                  // ʹ��Ĭ��ֵ����ӡ��cout
    printer( s ) ;                         // ��cout�д�ӡstring����s���ݣ������һ���ո�
    PrintString errors( cerr , '\n' ) ;
    errors( s ) ;                          // ��cerr�д�ӡstring����s���ݣ������һ���ո�

    vector<string> svec = { "a" , "an" , "the" } ;
    for_each( svec.cbegin() , svec.cend() , PrintString( cout , '\t' ) ) ;
    return 0;
}
