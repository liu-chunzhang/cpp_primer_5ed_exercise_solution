// ������������֤�̲���9.3.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ilst = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;
    list<int>::iterator liter = ilst.begin() ;
    while( liter != ilst.end() )
        if( *liter & 1 )                                // �̲�������ȡģ���㣬�˴���λ���㣬Ҳ�ɴﵽ��ͬЧ������Ԫ��Ϊ������ɾ����Ԫ��
            liter = ilst.erase( liter ) ;
        else
            ++liter ;
    for( const int i : ilst )
        cout << i << " " ;

    ilst.clear() ;                                      // ɾ�������е�����Ԫ��
    ilst.erase( ilst.cbegin() , ilst.cend() ) ;        // �ȼ۵���
    return 0;
}
