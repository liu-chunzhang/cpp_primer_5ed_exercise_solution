// ������������֤��������ϰ16.20�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

template <typename Container> void print( const Container &container ) ;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    print( ivec ) ;
    return 0;
}

template <typename Container>
void print( const Container &container ) {
    for( typename Container::const_iterator citer = container.cbegin() ; citer != container.cend() ; ++citer )
        cout << *citer  << " " ;
}
