// ������������֤�̲���6.1.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

size_t count_calls() ;

int main() {
    for( size_t i = 0 ; i != 10 ; ++i )
        cout << count_calls() << " " ;
    return 0;
}

size_t count_calls(){
    static size_t ctr = 1;
    return ++ctr ;
}

