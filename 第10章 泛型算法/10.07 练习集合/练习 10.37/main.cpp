// 本程序用于验证读者在练习10.37中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 } ;
    list<int> ilst ;
    copy( ivec.crbegin() + 2 , ivec.crend() - 3 , back_inserter( ilst ) ) ;   // 可参考教材图10.1和图10.2，理解为何如此选择打印的迭代器
    copy( ilst.cbegin() , ilst.cend() , ostream_iterator<int>( cout , " " ) ) ;
    return 0;
}
