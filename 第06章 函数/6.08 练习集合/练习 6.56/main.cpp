// 本程序用于验证读者在练习6.56中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;
typedef int ( *funcP )( int , int ) ;

int add2Int( int , int ) ;
int sub2Int( int , int ) ;
int multi2Int( int , int ) ;
int div2Int( int , int ) ;
void compute( int , int , funcP ) ;

int main() {
    auto p1 = add2Int , p2 = sub2Int , p3 = multi2Int , p4 = div2Int;          // 当然，也可以用decltype(add2Int)申明类型
    vector<decltype(add2Int)*> ipvec{ p1 , p2 , p3 , p4 } ;
    for( auto func : ipvec )
        compute( 3 , 5 , func ) ;
    return 0;
}

int add2Int( int a , int b ){
    return a + b ;
}

int sub2Int( int a , int b ){
    return a - b ;
}

int multi2Int( int a , int b ){
    return a * b ;
}

int div2Int( int a , int b ){
    return a / b ;
}

void compute( int a , int b , funcP p ){
    cout << p( a ,b ) << endl;
}
