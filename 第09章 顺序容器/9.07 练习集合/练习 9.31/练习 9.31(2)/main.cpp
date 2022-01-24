// ������������֤��������ϰ9.31�е��뷨�����ڱ�Ҫ�ĵط�����˵����˵�����ʵ��޸ĳ���ʹ֮������forward_list�ṹ
#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> ivec = { 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;        // �����list�汾����Ҫͬʱά��ǰ���ͺ������������
    forward_list<int>::const_iterator pre = ivec.before_begin() , curr = ivec.cbegin() ;
    while( curr != ivec.cend() )
        if( *curr & 1 ){
            curr = ivec.insert_after( curr , *curr ) ;      // ���뵽��ǰԪ��֮��insert_after���ص������һ������Ԫ�صĵ�����
            pre = curr++ ;                                  // forward_list��Ҫͬʱά��ǰ���ͺ��������������������һ������дҲ���в�ͬ��
        }
        else
            curr = ivec.erase_after( pre ) ;
    for( const int i : ivec )
        cout << i << "\t" ;
    return 0;
}
