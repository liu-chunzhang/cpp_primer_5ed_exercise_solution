// ������������֤��������ϰ9.27�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <forward_list>
using namespace std;

int main() {                                                                      // ����������հ�̳�P313-P314�Ĵ���
    forward_list<int> iflst = { 0 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    forward_list<int>::const_iterator pre = iflst.before_begin() ;
    forward_list<int>::const_iterator curr = iflst.cbegin() ;
    while( curr != iflst.cend() )
        if( *curr & 1 )
            curr = iflst.erase_after( pre ) ;
        else
            pre = curr++ ;
    for( const int i : iflst )
        cout << i << " " ;
    return 0;
}
