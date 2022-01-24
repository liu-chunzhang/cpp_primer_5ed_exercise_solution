// 本程序用于验证教材中4.10节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec(10) ;
    vector<int>::size_type cnt = ivec.size() ;
    for( vector<int>::size_type ix = 0 ; ix != ivec.size() ; ++ix , --cnt ){
        ivec[ix] = cnt ;
        cout << ivec[ix] << " " ;
    }
    return 0;
}
