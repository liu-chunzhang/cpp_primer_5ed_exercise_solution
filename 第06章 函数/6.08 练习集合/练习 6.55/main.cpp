// ������������֤��������ϰ6.55�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int add2Int( int , int ) ;
int sub2Int( int , int ) ;
int multi2Int( int , int ) ;
int div2Int( int , int ) ;

int main() {
    auto p1 = add2Int , p2 = sub2Int , p3 = multi2Int , p4 = div2Int;          // ��Ȼ��Ҳ������decltype(add2Int)��������
    vector<decltype(add2Int)*> ipvec{ p1 , p2 , p3 , p4 } ;
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
