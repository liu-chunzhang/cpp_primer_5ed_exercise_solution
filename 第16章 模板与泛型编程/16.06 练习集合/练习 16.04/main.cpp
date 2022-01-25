// ������������֤��������ϰ16.4�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename Iterator , typename T>
Iterator find( Iterator beg , Iterator ter , const T &value ) ;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 } ;
    cout << ( ( find( ivec.cbegin() , ivec.cend() , 8 ) != ivec.cend() ) ? "ivec�ﺬ��Ԫ��8." : "ivec�ﲻ����Ԫ��8." ) << endl;
    list<string> slst = { "welcome" , "to" , "C++" , "family" , "!" } ;
    cout << ( ( find( slst.cbegin() , slst.cend() , "Hello" ) != slst.cend() ) ? "slst�ﺬ��Hello." : "slst�ﲻ��hello." ) << endl;
    return 0;
}

template<typename Iterator , typename T> Iterator find( Iterator beg , Iterator ter , const T &value ) {
    while( beg != ter && *beg != value )
        ++beg ;
    return beg ;
}
