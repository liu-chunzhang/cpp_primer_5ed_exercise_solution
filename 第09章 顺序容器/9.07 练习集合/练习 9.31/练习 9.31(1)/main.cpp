// ������������֤��������ϰ9.31�е��뷨�����ڱ�Ҫ�ĵط�����˵����˵�����ʵ��޸ĳ���ʹ֮������list�ṹ
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    list<int>::const_iterator iter = ivec.cbegin() ;
    while( iter != ivec.cend() )
        if( *iter & 1 ){
            iter = ivec.insert( iter , *iter ) ;
            ++++iter ;                                                    // ֻ�е������Ķ��������listû�ж��壬ʣ�µļ�������
        }
        else
            iter = ivec.erase( iter ) ;
    for( const int i : ivec )
        cout << i << " " ;
    return 0;
}
