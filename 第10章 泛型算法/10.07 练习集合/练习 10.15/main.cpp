// ������������֤��������ϰ10.15�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void add( int a ) ;

int main() {
    add( 3 );
    return 0;
}

void add( int a ){
    auto sum = [ a ]( int b ) -> int { return a + b ; } ;
    cout << sum( 0 ) ;
}
