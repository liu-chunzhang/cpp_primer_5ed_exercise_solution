// 本程序用于验证读者在练习2.17中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    int i , &ri = i ;                     // 引用不是对象，它只是为已经存在的对象起了一个另外一个名字，也就是ri是i的别名。在本程序中，i首先被赋值5，
    i = 5 ;                               // 然后被更新为10， 因为ri是i的引用，所以相当于打出了用空格间隔的两次i的值。
    ri = 10 ;
    cout << i << " "  << ri << endl;
    return 0;
}
