// ������������֤��������ϰ9.26�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    int ia[] = { 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 55 , 89 } ;
    vector<int> ivec( begin( ia ) , end( ia ) ) ;
    vector<int>::const_iterator iveciter = ivec.cbegin() ;
    while( iveciter != ivec.cend() )
        if( !( *iveciter & 1 ) )                                        // �����ż��������������
            iveciter = ivec.erase( iveciter ) ;
        else
            ++iveciter ;
    for( const int i : ivec )
        cout << i << "\t" ;
    cout << endl;

    list<int> ilst( begin( ia ) , end( ia ) ) ;
    list<int>::const_iterator ilstiter = ilst.cbegin() ;
    while( ilstiter != ilst.cend() )
        if( *ilstiter & 1 )
            ilstiter = ilst.erase( ilstiter ) ;
        else
            ++ilstiter ;
    for( const int i : ilst )
        cout << i << "\t" ;
    cout << endl;
    return 0;
}
