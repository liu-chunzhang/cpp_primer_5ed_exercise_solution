// ������������֤��������ϰ19.1�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

void* operator new( size_t cnt );
void operator delete( void *mem ) noexcept ;

int main() {
    int *p = new int( 8 ) ;
    *p = 5 ;
    cout << *p ;
    delete p ;
    return 0;
}

void* operator new( size_t cnt ){
    if( void *mem = malloc( cnt ) )
        return mem ;
    else
        throw bad_alloc() ;
}

void operator delete( void *mem ) noexcept {
    free( mem ) ;
}
