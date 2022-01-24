//本程序用于验证读者在练习2.22中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i = 0 , *p1 = nullptr , *p = &i ;
    if( p1 )                                  // 检验指针的值(即指针所指对象的地址)
        cout << "p1 pass." << endl;
    if( p )                                   // 检验指针的值(即指针所指对象的地址)
        cout << "p pass." << endl;
    if( *p )                                  // 检验指针所指对象的值
        cout << "i pass." << endl;
    return 0;
}
