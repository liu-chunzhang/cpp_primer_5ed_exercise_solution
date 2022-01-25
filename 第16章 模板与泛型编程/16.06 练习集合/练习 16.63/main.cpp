// ������������֤��������ϰ16.63�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <typename T> unsigned count( const vector<T> &vec , const T value ) ;

int main() {
    vector<double> dvec = { 1.2 , 2.3 , 2.3 , 4.6 , 3.2 , 2.3 } ;
    cout << count( dvec , 2.3 ) << endl;
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 } ;
    cout << count( ivec , 4 ) << endl;
    vector<string> svec = { "hello" , "welcome" , "to" , "C++" , "world" } ;
    cout << count( svec , string( "hiya" ) ) << endl;
    return 0;
}

template <typename T> unsigned count( const vector<T> &vec , const T value ) {
    return count( vec.cbegin() , vec.cend() , value ) ;
}
