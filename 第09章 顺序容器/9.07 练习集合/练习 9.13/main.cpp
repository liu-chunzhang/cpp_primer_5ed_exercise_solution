// 本程序用于验证读者在练习9.13中的想法，并在必要的地方予以说明
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    list<int> ilst = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<double> dvec( ilst.cbegin() , ilst.cend() ) ;
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<double> dvec2( ivec.cbegin() , ivec.cend() ) ;
    for( const double i : dvec )
        cout << i << " " ;
    cout << endl;
    for( const double i : dvec2 )
        cout << i << " " ;
    return 0;
}

// 由于list<int>与vector<double>是不同的容器类型，因此无法采用容器拷贝初始化方式。但是前者的元素类型是int，与后者的元素类型double相容。因此
// 可以采用范围初始化方式来构造一个vector<double>，令它的元素值与list<int>完全相同。对vector<int>也是同样的思路。
