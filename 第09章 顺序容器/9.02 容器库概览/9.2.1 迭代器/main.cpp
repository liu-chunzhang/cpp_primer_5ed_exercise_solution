// 本程序用于验证教材中9.2.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec( 10 , 42 ) ;
    int val = 3 ;
    vector<int>::iterator beg = ivec.begin() , ter = ivec.end() ;
    while( beg != ter ){
        *beg = val ;
        cout << *beg++ << " " ;
    }
    return 0;
}
