// ������������֤�̲���10.4.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    vector<int> ivec = { 1 , 1 , 3 , 5 , 7 , 9 , 2 , 4 , 8 , 6 } ;
    for( vector<int>::const_reverse_iterator r_iter = ivec.crbegin() ; r_iter != ivec.crend() ; ++r_iter )
        cout << *r_iter << " " ;
    cout << endl;
    copy( ivec.crbegin() , ivec.crend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;          // �����ӡ
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;            // �����ӡ
    sort( ivec.begin() , ivec.end() ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    sort( ivec.rbegin() , ivec.rend() ) ;                                                           // ���뷴����������㷨sort������������Ԫ��
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;

    string line( "FRIST,MIDDLE,LAST" ) ;
    string::const_iterator comma = find( line.cbegin() , line.cend() , ',' ) ;
    cout << string( line.cbegin() , comma ) << endl;
    string::const_reverse_iterator rcomma = find( line.crbegin() , line.crend() , ',' ) ;
    cout << string( line.crbegin() , rcomma ) << endl;
    cout << string( rcomma.base() , line.cend() ) << endl;

    return 0;
}
