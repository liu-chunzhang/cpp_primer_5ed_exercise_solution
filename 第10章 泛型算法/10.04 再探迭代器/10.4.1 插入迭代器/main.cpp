// ������������֤�̲���10.4.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ilst = { 1 , 2 , 3 , 4 } ;
    list<int> ilst2 , ilst3 ;
    copy( ilst.cbegin() , ilst.cend() , front_inserter( ilst2 ) ) ;
    copy( ilst.cbegin() , ilst.cend() , inserter( ilst3 , ilst3.begin() ) ) ;
    for( const int i : ilst2 )
        cout << i << " " ;
    cout << endl;
    for( const int i : ilst3 )
        cout << i << " " ;
    cout << endl;
    return 0;
}
