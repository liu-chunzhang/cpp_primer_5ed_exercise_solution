// 本程序用于验证读者在练习5.17中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec1{ 0 , 3 , 1 , 2 } , ivec2{ 0 , 1 , 1 , 2 , 3 , 5 , 8 } ;   // 可以通过调整输入的初始的vector，来判断程序是否可以正常工作
    if( ivec1.size() < ivec2.size() ){
        if( mismatch( ivec1.cbegin() , ivec1.cend() , ivec2.cbegin() ).first == ivec1.cend() )
            cout << "vector1可以做vector2的前缀。" << endl;
        else{
            cerr << "vector1虽然短，但是无法做vector2的前缀。" << endl;
            return -1 ;
        }
    }
    else{
        if( mismatch( ivec2.cbegin() , ivec2.cend() , ivec1.cbegin() ).first == ivec2.cend() )
            cout << "vector2可以做vector1的前缀。" << endl;
        else{
            cerr << "vector2虽然短，但是无法做vector1的前缀。" << endl;
            return -1 ;
        }
    }
    return 0 ;
}
