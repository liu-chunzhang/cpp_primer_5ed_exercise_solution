// ������������֤��������ϰ9.19�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <list>
using namespace std;

int main() {
    string str ;
    list<string> slst ;
    while( cin >> str )
        slst.push_back( str );
    for( list<string>::const_iterator iter = slst.cbegin() ; iter != slst.cend() ; ++iter )
        cout << *iter << " " ;
    return 0;
}
