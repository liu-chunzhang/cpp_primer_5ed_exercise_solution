// 本程序用于验证读者在练习9.5中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

vector<int>::const_iterator find( vector<int>::const_iterator cbeg , vector<int>::const_iterator cter , int target ) ;

int main(){
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<int>::const_iterator cbeg = ivec.cbegin() ;
    vector<int>::const_iterator cter = ivec.cend() ;
    cout << find( cbeg , cter , 3 ) - cbeg << endl;
    cout << find( cbeg , cter , 13 ) - cbeg << endl;
    return 0;
}

vector<int>::const_iterator find( vector<int>::const_iterator cbeg , vector<int>::const_iterator cter , int target ) {
    while( cbeg != cter )
        if( *cbeg++ == target )
            return --cbeg ;         // 若能成功找到则正常返回一个迭代器
    return cter ;                   // 若不能成功找到则返回尾后迭代器
}
