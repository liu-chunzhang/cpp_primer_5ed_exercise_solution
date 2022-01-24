// 本程序用于验证教材中10.4.3节内容的可靠性，并提供感性认知
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
    copy( ivec.crbegin() , ivec.crend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;          // 反序打印
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;            // 正序打印
    sort( ivec.begin() , ivec.end() ) ;
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    sort( ivec.rbegin() , ivec.rend() ) ;                                                           // 传入反向迭代器，算法sort按照逆序排列元素
    copy( ivec.cbegin() , ivec.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;

    string line( "FRIST,MIDDLE,LAST" ) ;
    string::const_iterator comma = find( line.cbegin() , line.cend() , ',' ) ;
    cout << string( line.cbegin() , comma ) << endl;
    string::const_reverse_iterator rcomma = find( line.crbegin() , line.crend() , ',' ) ;
    cout << string( line.crbegin() , rcomma ) << endl;
    cout << string( rcomma.base() , line.cend() ) << endl;

    return 0;
}
