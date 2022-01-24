// 本程序用于验证读者在练习3.40中的想法，并在必要的地方予以说明
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    constexpr unsigned sz1 = 20 , sz2 = 20 ;
    constexpr unsigned sz = sz1 + sz2 ;
    char ca1[sz1] = "C++ " ;
    char ca2[sz2] = "family" ;
    char ca[sz] ;
    strcpy( ca , ca1 ) ;
    strcat( ca , ca2 ) ;
    cout << "第一个字符串是；" << ca1 << endl;
    cout << "第二个字符串是：" << ca2 << endl;
    cout << "合并后的字符串是：" << ca << endl;
    return 0;
}
