// ������������֤��������ϰ9.18�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <deque>
using namespace std;

int main() {
    string str ;
    deque<string> sdeq ;
    while( cin >> str )
        sdeq.push_back( str );
    for( deque<string>::const_iterator iter = sdeq.cbegin() ; iter != sdeq.cend() ; ++iter )
        cout << *iter << " " ;
    return 0;
}
