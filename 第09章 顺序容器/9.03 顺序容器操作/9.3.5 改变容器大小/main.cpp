// ������������֤�̲���9.3.5�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <list>
using namespace std;

void print( list<int> &ilst ) ;

int main() {
    list<int> ilst( 10 , 42 ) ;    // 10��int��ÿ����ֵ����42
    print( ilst ) ;
    ilst.resize( 15 ) ;            // ��5��ֵΪ0��Ԫ����ӵ�ilstĩβ
    print( ilst ) ;
    ilst.resize( 25 , -1 ) ;       // ��10��ֵΪ-1��Ԫ����ӵ�ilstĩβ
    print( ilst ) ;
    ilst.resize( 5 ) ;             // ��ilstĩβɾ��20��Ԫ��
    print( ilst ) ;
    return 0;
}

void print( list<int> &ilst ) {
    for( const int i : ilst )
        cout << i << "\t" ;
    cout << endl;
}
