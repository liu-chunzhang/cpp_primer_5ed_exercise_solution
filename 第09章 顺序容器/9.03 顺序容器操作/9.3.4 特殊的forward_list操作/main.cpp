// ������������֤�̲���9.3.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> iflst = { 0 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    forward_list<int>::const_iterator prev = iflst.before_begin() ;            // ��ʾiflst�ġ���ǰԪ�ء�
    forward_list<int>::const_iterator curr = iflst.cbegin() ;                 // ��ʾiflst�еĵ�һ��Ԫ��
    while( curr != iflst.cend() )                                                // �����Ȼ��Ԫ��Ҫ����
        if( *curr & 1 )                                                          // ��Ԫ��Ϊ����
            curr = iflst.erase_after( prev ) ;                                    // ɾ�������ƶ�curr
        else
            prev = curr++ ;                                                       // �ƶ�������curr��ָ����һ��Ԫ�أ�preָ��curr֮ǰ��Ԫ��
    for( const int i : iflst )
        cout << i << " " ;
    return 0;
}
