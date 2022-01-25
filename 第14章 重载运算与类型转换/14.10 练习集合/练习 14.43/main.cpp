// 本程序用于验证读者在练习14.43中的想法，并在必要的地方予以说明
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
using std::placeholders::_1 ;

bool Alldivided( int i , vector<int> &ivec ) ;

int main() {
    int i = 3 ;
    vector<int> ivec = { 3 , 6 , 7 } , ivec2 = { 3 , 6 , 9 } ;
    cout << ( Alldivided( i , ivec ) ? "ivec内的每个元素都可以整除i。" : "并不是ivec内的每个元素都可以整除i。" ) << endl;
    cout << ( Alldivided( i , ivec2 ) ? "ivec2内的每个元素都可以整除i。" : "并不是ivec2内的每个元素都可以整除i。" ) << endl;
    return 0;
}

bool Alldivided( int i , vector<int> &ivec ){
    return find_if( ivec.cbegin() , ivec.cend() , bind( modulus<int>() , _1 , i ) ) == ivec.cend() ;   // 使用泛型算法查找
}
