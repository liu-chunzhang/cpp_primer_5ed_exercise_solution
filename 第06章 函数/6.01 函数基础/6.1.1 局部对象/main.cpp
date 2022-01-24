// 本程序用于验证教材中6.1.1节内容的可靠性，并提供感性认知
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

