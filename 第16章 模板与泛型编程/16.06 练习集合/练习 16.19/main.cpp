// ������������֤��������ϰ16.19�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
    size_t capacity = container.size() ;
    for( typename Container::size_type i = 0 ; i != capacity ; ++i )
        cout << container[ i ]  << " " ;                                        // ��Ȼѭ�����������˺Ϸ��ԣ������ټ��Խ�����Σ���ʹ��at��
}
